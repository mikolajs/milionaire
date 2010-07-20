#include "Questions.h"
#include <QtXml>


Questions::Questions()
{
    description = "Pusta";
    filename = "";
}

Questions::Questions(QString opis, QString nazwa)
{
    description = opis;
    filename = nazwa;
}

void Questions::addQuest(Quest& quest)
{
    if (!quest.valid())
        return;
    int level = quest.level - 1;
    Q_ASSERT(level < MAX_QUEST_LIST && level >= 0);
    questVector.push_back(quest);
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
    resetData();
    //wczytanie opisu
    while (!load.atEnd()) {
        if (load.readNext() == QXmlStreamReader::StartElement && load.name() == "description" ) {
            if (load.isStartElement()) {
                if (load.name() == "description") {
                    description = load.readElementText();
                    break;
                }
            }
        }
    }
    //wczytanie reszty
    while(!load.atEnd()) {
        if (load.readNext() == QXmlStreamReader::StartElement && load.name().toString() == "quest" ) {
            readQuestion(load); //przekazanie kontroli do metody wyczytującej pytania
        }
    }

    return true;
}

void Questions::readQuestion(QXmlStreamReader& load) {
    Quest q;
    //wyszukiwanie elementów w pętli
    do {
            if (load.isStartElement()) {
                if (load.name() == "level") {
                    q.level = load.readElementText().toInt();
                }
                else if (load.name() == "question") {
                    q.question = load.readElementText();
                }
                else if (load.name() == "a") {
                    q.A = load.readElementText();
                }
                else if (load.name() == "b") {
                    q.B = load.readElementText();
                }
                else if (load.name() == "c") {
                   q.C = load.readElementText();
                }
                else if (load.name() == "d") {
                    q.D = load.readElementText();
                }
                else if (load.name() == "proper") {
                     q.correct = load.readElementText().at(0); //nie może być puste!
                }
                else {
                    //qDebug() << load.name();
                }
            }

    } while (load.readNext() != QXmlStreamReader::EndElement && load.name().toString() != "quest");
    //jeżeli prawidłowe pytanie dodaje do odpowiedniej listy
    if (q.valid()) {
        addQuest(q);
    }
    else {
        qDebug() << "Quest nieprawidłowy! Question::readQuest";
        //qDebug() << questToString(q);
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
    for (QVector<Quest>::iterator it = questVector.begin(); it != questVector.end(); ++it) {

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

    save.writeEndDocument(); //zamyka root i dodaje pustą linię
    return true;
}

void Questions::clear()
{
    resetData();
}

void Questions::resetData()
    {
        description.clear();
        questVector.clear();
    }

QVector<int> Questions::countQuestionInLevels(){
    QVector<int> tab;
    tab.resize(MAX_QUEST_LIST);
    for (int i = 0; i < MAX_QUEST_LIST; i++) tab[i] = 0;
    for (QVector<Quest>::iterator it = questVector.begin(); it != questVector.end(); ++it) {
        tab[(*it).level - 1]++;
    }
    return tab;
}

////////////////////////////////////////TESTY/////////////////////////////////////////////
/** metoda testująca zawartość klasy - na razy drukująca w konsoli kolejne pytania */
void Questions::test()
{
    qDebug() << "POCZĄTEK TESTU" ;
    createXMLforTest();
    set_filename("testowy.xml");
    //tempReader();
    loadFile();
    qDebug() << "Ilość pytań: ";
    qDebug() << questVector.size();
    qDebug() << "Ilość w poziomach: ";
    QVector<int> vec = countQuestionInLevels();
    for (QVector<int>::iterator it = vec.begin(); it != vec.end(); ++it) qDebug() << (*it);
    set_description("Quiz przetworzony w teście.");
    set_filename("przetworzony.xml");
    saveFile();
    qDebug() << "KONIEC TESTU" ;
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

void Questions::printContent()
{
    QString temp;
    qDebug() << "OPIS: ";
    qDebug() << get_description();
    qDebug() << "\nPytania: \n";
    for (QVector<Quest>::iterator  it = questVector.begin(); it != questVector.end(); ++it) {
            qDebug() << questToString(*it);
    }
}


QString Questions::questToString(Quest& q)
{
    QString temp;
    temp += "\n-------------BEGIN----------\n";
     temp += "level: ";
     temp += QString::number(q.level);
     temp += "\nQuestion:  ";
     temp += q.question;
     temp += "\nOdp A: ";
     temp += q.A;
     temp += "\nOdp B: ";
     temp += q.B;
     temp += "\nOdp C: ";
     temp += q.C;
     temp += "\nOdp D: ";
     temp += q.D;
     temp += "\nPoprawna odpowiedź to: ";
     temp += q.correct;
     temp += "\n----------END-------------\n";
     return temp;
}

void Questions::tempReader()
{
    //qDebug() << "tempReader początek";
    if (filename.isEmpty()) {
        qDebug() << "NIEPRAWIDŁOWA NAZWA PLIKU";
        return;
    }

    QFile File(filename);
    if (!File.open(QIODevice::ReadOnly)) {
        qDebug() << "NIE MOŻNA OTWORZYĆ PLIKU";
        return;
    }
    //qDebug() << "Nazwa pliku: " + File.fileName();
    QXmlStreamReader load(&File);

    while(!load.atEnd()) {
        qDebug() << "Początek pętli while";
        load.readNext();
        if ( load.isStartElement() && load.name() == "quest" ) {
            //load.readNext(); // przeskakuje do następnego tagu
            //readQuestion(load); //przekazanie kontroli do metody wyczytującej pytania
            qDebug() << load.name().toString();

            //wyszukiwanie elementów w pętli
            do {
                //napis między tagami
                if (load.isStartElement()) {
                    if (load.name() == "level") {
                        qDebug() <<  load.readElementText();
                    }
                    else if (load.name() == "question") {
                        qDebug() <<  load.readElementText();
                    }
                    else if (load.name() == "a") {
                        qDebug() <<  load.readElementText();
                    }
                    else if (load.name() == "b") {
                        qDebug() <<  load.readElementText();
                    }
                    else if (load.name() == "c") {
                        qDebug() <<  load.readElementText();
                    }
                    else if (load.name() == "d") {
                        qDebug() <<  load.readElementText();
                    }
                    else if (load.name() == "proper") {
                        qDebug() <<  load.readElementText();
                    }
                    else
                    {
                        qDebug() <<  "NIEZNANY ELEMENT STARTOWY";
                    }
                }


            } while (load.readNext() != QXmlStreamReader::EndElement && load.name().toString() != "quest");
        }
    }
}
