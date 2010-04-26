#ifndef QUEST_H
#define QUEST_H

#include <QString>

class Quest
{
public:
    Quest() {}
    Quest(QString pytanie, QString a, QString b, QString c, QString d, QChar poprawna, quint8 poziom)
    {
        question = pytanie;
        anserwA = a;
        anserwB = b;
        anserwC = c;
        anserwD = d;
        correct = poprawna;
        level = poziom;

        if(!valid())
            ;// blad
    }

    QString question;

    QString anserwA;
    QString anserwB;
    QString anserwC;
    QString anserwD;

    QChar correct;
    quint8 level;

    bool valid()
    {
        if(question.isEmpty())
            return false;

        if(anserwA.isEmpty())
            return false;
        if(anserwB.isEmpty())
            return false;
        if(anserwC.isEmpty())
            return false;
        if(anserwD.isEmpty())
            return false;

        if(correct.isNull() || correct.isNumber())
            return false;
        if(!level || level > 5|| level < 1)
            return false;

        return true;
    }

};
#endif //QUEST_H
