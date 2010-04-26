#ifndef QUIZEDIT_H
#define QUIZEDIT_H

#include <QtGui/QWidget>

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

private:
    Ui::QuizEdit *ui;
};

#endif // QUIZEDIT_H
