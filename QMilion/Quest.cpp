#include "Quest.h"

Quest::Quest(QString pytanie, QString a, QString b, QString c, QString d, QChar poprawna, int poziom)
    {
        question = pytanie;
        A = a;
        B = b;
        C = c;
        D = d;
        correct = poprawna;
        level = poziom;
    }

/** Sprawdza  poprawność pytania */
bool Quest::valid()
    {
        if(question.isEmpty())
            return false;
        if(A.isEmpty())
            return false;
        if(B.isEmpty())
            return false;
        if(C.isEmpty())
            return false;
        if(D.isEmpty())
            return false;

        if(correct.isNull() || correct.isNumber())
            return false;
        if(level > 5|| level < 1) // !level to to samo co level != 0
            return false;
         if (correct != 'A' && correct != 'B' && correct != 'C' && correct != 'D' )
            return false;


        return true;
    }
