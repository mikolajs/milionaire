#ifndef QUIZEDIT_H
#define QUIZEDIT_H

#include <QtGui/QWidget>
#include "../Questions/Questions.h"

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
