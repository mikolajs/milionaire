#include "Quest.h"

Quest::Quest(QString pytanie, QString a, QString b, QString c, QString d, QChar poprawna, quint8 poziom)
    {
        question = pytanie;
        anserwA = a;
        anserwB = b;
        anserwC = c;
        anserwD = d;
        correct = poprawna;
        level = poziom;

        if(!valid());// blad
    }

/** Sprawdza  poprawność pytania */
bool Quest::valid()
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
         if (correct != 'A' && correct != 'B' && correct != 'C' && correct != 'D' )
            return false;


        return true;
    }
