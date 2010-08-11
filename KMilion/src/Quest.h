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

#ifndef QUEST_H
#define QUEST_H

#include <QString>

class Quest
{
public:
    Quest() {}
    Quest(QString pytanie, QString a, QString b, QString c, QString d, QChar poprawna, int poziom);
    QString question;

    QString A;
    QString B;
    QString C;
    QString D;

    QChar correct;
    int level;

    bool valid();

};
#endif //QUEST_H
