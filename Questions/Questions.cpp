#include "Questions.h"
#include <QtXml>


Questions::Questions()
{
    description = "Pusta";
    filename = ""
}

Questions::Questions(QString opis, QString nazwa)
{
    description = opis;
    filename = nazwa;
}

void Questions::addQuest(Quest quest)
{
    if (!quest.valid())
        return;

    quint8 quest_level = quest.level;

    switch (quest_level)
    {
    case 1: questList1.push_back(quest); break;
    case 2: questList2.push_back(quest); break;
    case 3: questList3.push_back(quest); break;
    case 4: questList4.push_back(quest); break;
    case 5: questList5.push_back(quest); break;
    }
}

//te metody przenieść do klas okienek
QList<Quest> Questions::makeQuiz()
{
    QList<Quest> pytania; // przygotowujemy zmienna na wylosowane pytania

    // losujemy pytanie z poziomu 1, 2, 3 itd.
    pytania.push_back(GetRandomQuest(questList1));
    pytania.push_back(GetRandomQuest(questList2));
    pytania.push_back(GetRandomQuest(questList3));
    pytania.push_back(GetRandomQuest(questList4));
    pytania.push_back(GetRandomQuest(questList5));

    return pytania;
}
//tę metodę przenieść do klas okienek
Quest Questions::GetRandomQuest(QList<Quest> questsList)
{
    if (questsList.empty())
        return Quest();

    QList<Quest>::const_iterator i = questsList.begin();
    qint32 random = rand()%questsList.size();
    i+=random;

    if (i!=questsList.end())
        return (*i);
    else
        return (*questsList.end());
}



bool Questions::loadFile()
{
    if (filename.isEmpty())
        return false;

    QFile File(filename);
    if (!File.open(QIODevice::ReadOnly))
        return false;

    QXmlStreamReader load(&File);
    //kasowanie dotychczasowej wartości
    ResetData();

    while(!load.atEnd()) {
        if (load.readNext() == QXmlStreamReader::StartElement && load.name().toString() == "quest" ) {
            load.readNext(); // przeskakuje do następnego tagu
            readQuestion(load); //przekazanie kontroli do metody wyczytującej pytania
        }
    }


    return true;
}

void Questions::readQuestion(QXmlStreamReader& load) {
    Quest q;
    int action = 0;
    //wyszukiwanie elemtntów w pętli
    do {
        //napis między tagami
        if (load.isCharacters()) {
            if (action != 0) {
                switch (action) {
                   case 1:
                        q.level = load.name().toString().toInt();
                        break;
                   case 2:
                        q.question = load.name().toString();
                        break;
                   case 3:
                        q.A = load.name().toString();
                        break;
                   case 4:
                        q.B = load.name().toString();
                        break;
                   case 5:
                        q.C = load.name().toString();
                        break;
                   case 6:
                        q.D = load.name().toString();
                        break;
                   case 7:
                        q.correct = load.name().toString().at(0); //nie może być puste!
                        break;
                }
            }

        }
        //ustawiam jaką akcję należy wykonać w zależności od tagu
        else {
            action = 0; //dla bezpieczeństwa
            if (load.isStartElement()) {
                if (load.name().toString() == "level") {
                    action = 1;
                }
                else if (load.name().toString() == "question") {
                    action = 2;
                }
                else if (load.name().toString() == "a") {
                    action = 3;
                }
                else if (load.name().toString() == "b") {
                    action = 4;
                }
                else if (load.name().toString() == "c") {
                    action = 5;
                }
                else if (load.name().toString() == "d") {
                    action = 6;
                }
                else if (load.name().toString() == "proper") {
                    action = 7;
                }
                else action = 0;
            }
        }

    } while (load.readNext() != QXmlStreamReader::EndElement && load.name().toString() != "quest");
    //jeżeli prawidłowe pytanie dodaje do odpowiedniej listy
    if (q.valid()) {
        switch (q.level) {
            case 1:
                questList1.append(q);
                break;
            case 2:
                questList2.append(q);
                break;
            case 3:
                questList3.append(q);
                break;
            case 4:
                questList4.append(q);
                break;
            case 5:
                questList5.append(q);
                break;
        }
    }

}

bool Questions::saveFile()
{
    if (filename.isEmpty())
        return false;

    QFile File(filename);
    if (!File.open(QIODevice::WriteOnly))
        return false;

    QXmlStreamWriter save(&File);
    save.setCodec("UTF-8");
    save.writeStartDocument();
    save.writeStartElement("root");

    save.writeStartElement("description");
    save.writeCharacters(description);
    save.writeEndElement();

    writeQuestList(questList1,save);
    writeQuestList(questList2,save);
    writeQuestList(questList3,save);
    writeQuestList(questList4,save);
    writeQuestList(questList5,save);


    save.writeEndDocument(); //zamyka root i dodaje pustą linię
    return true;
}

void Questions::writeQuestList(QList<Quest>& questList, QXmlStreamWriter& save)
{
     for (QList<Quest>::iterator it = questList.begin(); it != questList.end(); ++it) {
        save.writeStartElement("quest");

        save.writeStartElement("level");
        save.writeCharacters(QString::number((*it).level));
        save.writeEndElement();

        save.writeStartElement("question");
        save.writeCharacters((*it).question);
        save.writeEndElement();


        save.writeStartElement("a");
        save.writeCharacters((*it).A);
        save.writeEndElement();

        save.writeStartElement("b");
        save.writeCharacters((*it).B);
        save.writeEndElement();

        save.writeStartElement("c");
        save.writeCharacters((*it).C);
        save.writeEndElement();

        save.writeStartElement("d");
        save.writeCharacters((*it).D);
        save.writeEndElement();

        save.writeStartElement("proper");
        save.writeCharacters((*it).correct);
        save.writeEndElement();

        save.writeEndElement(); //quest
    }
}

void Questions::ResetData()
    {
        description.clear();
        //filename.clear();
        questList1.clear();
        questList2.clear();
        questList3.clear();
        questList4.clear();
        questList5.clear();
    }
////////////////////////////////////////TESTY/////////////////////////////////////////////
/** metoda testująca zawartość klasy - na razy drukująca w konsoli kolejne pytania */
void Questions::test()
{
    createXMLforTest();
}

void Questions::createXMLforTest() {
    QFile file("testowy.xml");
     if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
         return;

     QTextStream out(&file);
     out << "<xml coding=\"utf-8\" >\n";
     out << "<root>\n";
     out << "<description>Quiz wygenerowany automatycznie dla testów.</description>\n";
     for (int i = 0; i < 10; i++) {
         out << "<quest>\n";
         out << "<level>";
         out << QString::number(i%5 + 1);
         out << "</level>\n";
         out << "<question>Testowe pytanie?</question>\n";
         out << "<a>Odpowiedź a</a>\n";
         out << "<b>Odpowiedź b</b>\n";
         out << "<c>Odpowiedź c</c>\n";
         out << "<d>Odpowiedź d</d>\n";
         out << "<proper>A</proper>";
         out << "</quest>\n";
     }

     out << "</root>\n";

}




