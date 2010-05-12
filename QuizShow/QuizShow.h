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
    QuizShow(QWidget *parent = 0);
    ~QuizShow();
    /** sprawdza na początku gry czy można wylosować do końca gry pytania */
    bool canPerformNewQuiz();
    /** losuje następne pytanie i wyświetla na formatce */
    void showNext();

private:
    Ui::QuizShow *ui;
    QuestionShow questions;
};

#endif // QUIZSHOW_H
