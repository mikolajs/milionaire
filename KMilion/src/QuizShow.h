
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

#ifndef QUIZSHOW_H
#define QUIZSHOW_H

#include <QtGui/QWidget>
#include "QuestionShow.h"

class QTimer;
class QKeyEvent;
//class QAction;
//class QMenu;
//class QToolBar;

namespace Ui
{
    class QuizShow;
}

class QuizShow : public QWidget
{
    Q_OBJECT

public:
    /** nazwa i opis inicjuje questions */
    QuizShow(QWidget *parent = 0);
    ~QuizShow();
    /** sprawdza na początku gry czy można wylosować do końca gry pytania */
    bool canPerformNewQuiz();
    /** wczytanie danych z pliku */
    void refreshData(QString path);


protected:
    //virtual void keyPressEvent(QKeyEvent *);
    //virtual void resizeEvent(QResizeEvent *);

public slots:
    /** akcja wybrania i zaznaczenia odpowiedzi A*/
    void selectAnswerA();
     /** akcja wybrania i zaznaczenia odpowiedzi B*/
    void selectAnswerB();
     /** akcja wybrania i zaznaczenia odpowiedzi C*/
    void selectAnswerC();
     /** akcja wybrania i zaznaczenia odpowiedzi D*/
    void selectAnswerD();
    /** zezygnacja z gry */
    void resignAction();
    /** zaznaczenie pół na pół */
    void fifty_fiftyAction();
    /** pomoc publiczności */
    void publicAction();
    /** telefon do przyjaciela */
    void phoneAction();
    /** informacja o wygranej */
    void showCongratulation();
    /** sprawdza prawidłową odpowiedź, uruchamia timer i wypisuje inforamcje o wygranej*/
    void showPrice();
    /** pokazuje treść pytania*/
    void showQuestion();
    /** pokazuje końcową wygraną miliona */
    void showFullWins();


private:
    Ui::QuizShow *ui;
    //flaga oznaczająca czy odłączono sloty
    bool slotsDisabled;
    //flagi użycia kół ratunkowych
    bool fiftyUsed;
    bool publicUsed;
    bool phoneUsed;
    //flaga odnotowująca czy użytkownik wybrał odpowiedź
    bool answerIsChoosen;
    //kontener z pytaniami
    QuestionShow questions;
    //aktualnie wylosowane pytanie
    Quest quest;
    //wybrana odpowiedź
    QChar selectedAnswer;
    //aktualny stan gry - pytanie
    int actualQuestion;
    //podmienia obrazki w button_answX aby zaznaczyć odpowiedź
    void makeSelectAnswer();
    //tylko do testów
    void test();
    //oblicza wartość wygranej
    QString winsAmount();
    // łączenie i rozłączanie slotów
    void connectSlots();
    void disconnectSlots();
    //timer do oddzielenia informacji od wygranej od następnego pytania
    QTimer* qtimer;
    //akcja wyjścia skrót klawiszowy
//    QAction* quitAct;
//    QMenu* menu;
//    QToolBar* toolbar;
    //podłączenie slotów
    void rawConnectSlots();
    //zwraca prawidłową odpowiedź jako liczbę 0 - A : 3 - D
    int correctAnswerInt() ;

};

#endif // QUIZSHOW_H
