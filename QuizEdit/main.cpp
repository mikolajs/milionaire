#include <QtGui/QApplication>
#include "QuizEdit.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QuizEdit w;
    w.show();
    return a.exec();
}
