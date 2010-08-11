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

#ifndef QUESTIONS_H
#define QUESTIONS_H

#include "Quest.h"
#include <QtCore>

#define MAX_QUEST_LIST 5

class QXmlStreamReader;
class QXmlStreamWriter;

class Questions
{

public:
    Questions();
    Questions(QString opis, QString nazwa);

    QVector<Quest> questVector;
    QString get_filename() const { return filename; }
    QString get_description() const { return description; }
    void set_description(QString value) { description = value; }
    void set_filename(QString value) { filename = value; }
    /** podaje tablicę wymiaru MAX_QUEST_LIST z ilością pytań w kolejnych poziomach (index + 1)*/
    QVector<int> countQuestionInLevels();
    /** podaje ilość pytań w vektorze*/
    int getSize() { return questVector.size(); }

    void addQuest(Quest& quest);
    /** ładuje dane z pliku (wcześniej należy ustawić nazwę pliku set_filename()) */
    bool loadFile();
    /** zapisuje dane do aktualnego pliku (według nazwy filename) */
    bool saveFile();

    //metoda tylko do testów
    void test();
    //czyści dane
    void clear();

private:
    QString description;
    QString filename;

    void resetData();

    //odczytuje pojedyncze pytanie ze strumienia i dodaje do odpowiedniej listy
    void readQuestion(QXmlStreamReader& load);

    //pomocnicza do przeniesienia
    QVector<Quest> makeQuiz();
    //tworzenie testowego pliku
    void createXMLforTest() ;
    //drukuje na stdout zawartość list z Quizami
    void printContent();
    //string z pytaniem
    QString questToString(Quest& q);
    //tymczasowa metoda testująca poprawność wczytywania XML
    void tempReader();

};
#endif //QUESTIONS_H

