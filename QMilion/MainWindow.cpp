#include "MainWindow.h"
#include <QPushButton>
#include <QMessageBox>
#include <QRect>
#include <QDebug>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));

    smallSize.setCoords(30,30,840,600);
    setGeometry(smallSize);
    setWindowTitle("QMilion - gra edukacyjna");
    button = new QPushButton("Rozpocznij, grę!", this);
    button->setGeometry(300,520,200,40);
    editorWidget = new QuizEdit(this);
    editorWidget->setGeometry(6,20,800,487);

    showWidget = new QuizShow(this);
    showWidget->setGeometry(0,5,744,600);
    showWidget->hide();

    isGame = false;

    connect(button,SIGNAL(clicked()),this,SLOT(runGame()));
}

void MainWindow::runGame()
{
    QString path = editorWidget->getPath();
    if (path.isEmpty()) {
        QMessageBox::critical(this,"Błąd pliku","Wybierz najpierw plik do quizu",QMessageBox::Ok);
        return;
    }
    isGame = true;
    editorWidget->hide();
    button->hide();
    qDebug() << "Ścieżka do pliku xml " + path;
    showFullScreen();
    setStyleSheet(QString::fromUtf8("background-color: rgb(70, 82, 255);"));

    showWidget->setGeometry((screenWidth_ - 744)/2,(screenHeight_ -600)/2,744,600);
    showWidget->show();
    showWidget->refreshData(editorWidget->getPath());

}

void MainWindow::setScreenSize(int w, int h)
{
    screenWidth_ = w;
    screenHeight_ = h;
}


///@override virtual
void MainWindow::keyPressEvent(QKeyEvent* kevent)
{
    if (isGame) {
        if (kevent->key() == Qt::Key_E && kevent->modifiers() == Qt::ControlModifier) {
            //qDebug() << "Wciśnięto Ctrl + E";
           showWidget->hide();
           showNormal();
           setStyleSheet(QString::fromUtf8("background-color: none;"));
           setGeometry(smallSize);
           editorWidget->show();
           button->show();
           isGame = false;
        }
    }
    else {
        if (kevent->key() == Qt::Key_Q && kevent->modifiers() == Qt::ControlModifier) {
        //zamknięcie programu
            qDebug() << "Wciśnięto Ctrl + Q";
            if (! editorWidget->saved) {
                if ( QMessageBox::question(this,"Niezapisany plik","Niezapisano pliku! \n Czy chcesz wyjść z programu bez zapisu?",QMessageBox::Ok, QMessageBox::Cancel) == QMessageBox::Ok) exit(0);
            } else exit(0);


        }
    }

        kevent->accept();

}

MainWindow::~MainWindow()
{

}
