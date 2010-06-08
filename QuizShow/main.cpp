#include <QtGui/QApplication>
#include "QuizShow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString path = "/home/ms/Programs/cpp/milionaire/QuizShow/testowy.xml";
    if (argc > 1)  path = argv[1];

    QuizShow w(path);
    w.show();
    return a.exec();
}
