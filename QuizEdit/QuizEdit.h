#ifndef QUIZEDIT_H
#define QUIZEDIT_H

#include <QtGui/QWidget>
#include "../Questions/Questions.h"
#include "questeditor.h"

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
    Questions* m_questions;
    void OdswiezWidok();
    bool LoadTest(QString filename);
    bool SaveTest(QString filename);

public slots:
    void Window_NowyTest();
    void Window_EdytujPytania(Quest& pytania);
    void Window_NowePytania();

    void LoadTestFile();
    void SaveTestFileNew();
    void SaveTestFileOld();

    void Odswiez();
};

#endif // QUIZEDIT_H
