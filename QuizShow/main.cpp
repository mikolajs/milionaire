#include <QtGui/QApplication>
#include "QuizShow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QuizShow w;
    //przekazać nazwę pliku do otwarcia w argumencie
    w.show();
    return a.exec();
}
