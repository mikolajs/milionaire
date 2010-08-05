#include <QtGui/QApplication>
#include "MainWindow.h"
#include <QDesktopWidget>
#include <QRect>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    const QRect r = a.desktop()->frameGeometry();
    MainWindow w;
    w.setScreenSize(r.width(), r.height());
    w.show();
    return a.exec();
}
