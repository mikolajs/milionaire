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


#ifndef QUIZEDIT_H
#define QUIZEDIT_H

#include <QtGui/QWidget>
#include "Questions.h"

namespace Ui
{
    class QuizEdit;
}

class QuizEdit : public QWidget
{
    Q_OBJECT

public:
    QuizEdit(QWidget *parent = 0);
    ~QuizEdit();
    /** metoda pobierająca ścieżkę aktualnego quizu*/
    QString getPath();
    //flaga zapisu - widoczna dla głównego okna
    bool saved;

private:
    Ui::QuizEdit *ui;
    Questions* m_questions;
    //odswieża widok (listy, opisu i ścieżki) po załadowaniu pliku
    void refreshView();
    bool loadQuiz();
    bool saveQuiz();
    void showQuest(int row);
    //testowe
    void printRow();



public slots:
    //tworzy nowy test w pliku i ładuje jego widok
    void createTestFileNew();
// ładuje istniejący test
    void loadTestFile();
    //zapisuje jako ...
    void saveTestFileNew();
    //zapis akutalnego testu
    void saveTestFileOld();
    //wyświetl następne pytanie
    void nextQuest();
    //wyświetl poprzednie pytanie
    void previousQuest();

    //dodaje nowe pytanie
    void addNewQuest();
    //zmienia istniejące pytanie
    void alterQuest();
    //usuwa wybrany test
    void deleteQuest();
    //??void refresh();
    //wybiera test po kliknięciu go na liście
    void questClicked(int row);
};

#endif // QUIZEDIT_H
