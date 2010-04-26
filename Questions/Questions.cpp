#include "Questions.h"
#include <QtXml>


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

bool Questions::loadFile(QString file)
{
    if (file.isEmpty())
        return false;

    QFile File(file);
    if (!File.open(QIODevice::ReadOnly))
        return false;

    QDataStream load(&File);

    ResetData();

    load.setVersion(QDataStream::Qt_4_5);
    load >> description;
    load >> filename;
    load >> questList1;
    load >> questList2;
    load >> questList3;
    load >> questList4;
    load >> questList5;
    return true;
}

bool Questions::saveFile(QString file)
{
    if (file.isEmpty())
        return false;

    QFile File(file);
    if (!File.open(QIODevice::WriteOnly))
        return false;

    QDataStream save(&File);
    save.setVersion((QDataStream::Qt_4_5));
    save << description;
    save << filename;
    save << questList1;
    save << questList2;
    save << questList3;
    save << questList4;
    save << questList5;
    return true;
}

void Questions::ResetData()
    {
        description.clear();
        filename.clear();
        questList1.clear();
        questList2.clear();
        questList3.clear();
        questList4.clear();
        questList5.clear();
    }

/** metoda testująca zawartość klasy - na razy drukująca w konsoli kolejne pytania */
void Question::test()
{

}



