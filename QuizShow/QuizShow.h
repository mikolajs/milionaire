#ifndef QUIZSHOW_H
#define QUIZSHOW_H

#include <QtGui/QWidget>
#include "QuestionShow.h"

namespace Ui
{
    class QuizShow;
}

class QuizShow : public QWidget
{
    Q_OBJECT

public:
    /** nazwa i opis inicjuje questions */
    QuizShow(QString path, QWidget *parent = 0);
    ~QuizShow();
    /** sprawdza na początku gry czy można wylosować do końca gry pytania */
    bool canPerformNewQuiz();
    /** losuje następne pytanie i wyświetla na formatce */
    void showNext();

public slots:
    /** akcja wybrania i zaznaczenia odpowiedzi */
    void selectAnswerA();
    void selectAnswerB();
    void selectAnswerC();
    void selectAnswerD();
    /** zezygnacja z gry */
    void resignAction();
    /** zaznaczenie pół na pół */
    void fifty_fiftyAction();
    /** pomoc publiczności */
    void publicAction();
    /** telefon do przyjaciela */
    void phoneAction();
    /** główna metoda wyświetlająca nawe pytanie */
    void nextQuestion();

private:
    Ui::QuizShow *ui;
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
    //pokazuje aktualne pytanie
    void showQuestion();
    //tylko do testów
    void test();

};

#endif // QUIZSHOW_H
