#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QuizShow.h"
#include "QuizEdit.h"
#include <QRect>

class QPushButton;


class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setScreenSize(int w, int h);

public slots:
    void runGame();

protected:
    //void changeEvent(QEvent *e);
    virtual void keyPressEvent(QKeyEvent *);

private:
    QRect smallSize;
    QuizEdit* editorWidget;
    QuizShow* showWidget;
    QPushButton* button;
    //flaga informująca czy jest uruchomiony Quiz
    bool isGame;
    int screenWidth_;
    int screenHeight_;
};

#endif // MAINWINDOW_H
