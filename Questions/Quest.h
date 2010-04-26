#ifndef QUEST_H
#define QUEST_H

#include <QString>

class Quest
{
public:
    //Quest() {}
    Quest(QString pytanie, QString a, QString b, QString c, QString d, QChar poprawna, quint8 poziom);
    QString question;

    QString anserwA;
    QString anserwB;
    QString anserwC;
    QString anserwD;

    QChar correct;
    quint8 level;

    bool valid();

};
#endif //QUEST_H
