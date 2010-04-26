#ifndef QUESTIONS_H
#define QUESTIONS_H

#include "Quest.h"
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




    void addQuest(Quest quest);

    bool loadFile(QString file);

    bool saveFile(QString file);
    void test();


private:
    QString description;
    QString filename;

    void ResetData();
    Quest GetRandomQuest(QList<Quest> questsList);


};
#endif //QUESTIONS_H

