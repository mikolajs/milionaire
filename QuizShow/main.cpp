#include <QtGui/QApplication>
#include "QuizShow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QuizShow w;
    w.show();
    return a.exec();
}
