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

#include "QuestionShow.h"
#include <cstdlib>
#include <ctime>

QuestionShow::QuestionShow()
{

    std::srand(std::time(NULL));

    //sprawdź możliwość wykonania pełnej gry

    //rozpocznij grę lub wyświetl komunikat o błędzie


}

Quest QuestionShow::getQuest(int level)
{
    Q_ASSERT(level < 6 && level > 0);
    int randNum = getRand(questLists[level -1].length());
    Q_ASSERT(questLists[level-1].length() > randNum); //random ma dać mniejszą liczbę niż rozmiar listy
    return questLists[level-1].takeAt(randNum); //kasuje zwracany Quest z listy
}

bool QuestionShow::checkCanPerformQuiz()
{
    for (QVector<QList<Quest> >::iterator it = questLists.begin(); it != questLists.end(); ++it) {
    if ((*it).length() < 3) return false;
    }
    return true;
}

int QuestionShow::getRand(int range)
{
    int r = int(double(range) * (double(std::rand()) /double( RAND_MAX) ));
    //r musi  być z zakresu <0;4)
    Q_ASSERT(r > 0 && r < range);
    return  r;
}

//////////////////////////////// private ///////////////

void QuestionShow::makeQuestListContener()
{
    questLists.clear();
    for (int i = 1; i <= MAX_QUEST_LIST; i++) {
        QList<Quest> tempList;
        for (QVector<Quest>::iterator it = questVector.begin(); it != questVector.end(); ++it) {
            if ((*it).level == i) {
                tempList.append(*it);
            }
        }
        questLists.append(tempList);
    }
   questVector.clear(); //nie wiadomo czy bezpieczne!
}


QString QuestionShow::test(int size)
{
    QString tmp = "\nLiczby losowe dla rozmiaru listy ";
    tmp += QString::number(size);
    tmp += ": ";

    for (int i = 0; i < 10; i++){
        tmp += QString::number(getRand(size));
        tmp += ", ";
    }
    return tmp;
}

