#ifndef QUIZSHOW_H
#define QUIZSHOW_H

#include <QtGui/QWidget>

namespace Ui
{
    class QuizShow;
}

class QuizShow : public QWidget
{
    Q_OBJECT

public:
    QuizShow(QWidget *parent = 0);
    ~QuizShow();

private:
    Ui::QuizShow *ui;
};

#endif // QUIZSHOW_H
