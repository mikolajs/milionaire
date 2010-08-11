/*
    Quiz KMilion program
    Copyright (C) 2010  Mikołaj Sochacki

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/


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
