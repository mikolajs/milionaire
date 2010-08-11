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


#ifndef QUESTIONSHOW_H
#define QUESTIONSHOW_H

#include "Questions.h"

class QuestionShow : public Questions
{
public:
    QuestionShow();
    Quest getQuest(int level);
    bool checkCanPerformQuiz();
    /** dostarcza losową liczbę z zakresu 0-(range -1) ???   */
    int getRand(int range);
    QString test(int size);
    QVector<QList<Quest> > questLists;
    //robię swój konter aby nie przerabiać kodu
     void makeQuestListContener();
private:



};

#endif // QUESTIONSHOW_H
