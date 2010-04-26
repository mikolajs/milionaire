#ifndef QUESTIONS_H
#define QUESTIONS_H

#include "quest.h"
#include <QtCore>

class Questions
{

public:
    //Questions();
    Questions(QString opis, QString nazwa);

    QList<Quest> questList1;
    QList<Quest> questList2;
    QList<Quest> questList3;
    QList<Quest> questList4;
    QList<Quest> questList5;

    QString get_filename() const { return filename; }
    QString get_description() const { return description; }
    //void set_description(QString value) { description = value; }
    //void set_filename(QString value) { filename = value; }

    QList<Quest> makeQuiz();
    Quest GetRandomQuest(QList<Quest> questsList);

    void recycling(QList<Quest> rest);

    void addQuest(Quest quest);

    bool loadFile(QString file);

    bool saveFile(QString file);

    void ResetData()
    {
        description.clear();
        filename.clear();
        questList1.clear();
        questList2.clear();
        questList3.clear();
        questList4.clear();
        questList5.clear();
    }

private:
    QString description;
    QString filename;

};
#endif //QUESTIONS_H

