/********************************************************************************
** Form generated from reading UI file 'QuizEdit.ui'
**
** Created: Tue 25. May 23:17:57 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZEDIT_H
#define UI_QUIZEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuizEdit
{
public:
    QListWidget *listWidget;
    QPushButton *pbutton_dodaj;
    QPushButton *pbutton_edytuj;
    QPushButton *pbutton_usun;
    QPushButton *pbutton_nowyTest;
    QPushButton *pbutton_zapisz;
    QPushButton *pbutton_zapiszJako;
    QPushButton *pbutton_wczytaj;

    void setupUi(QWidget *QuizEdit)
    {
        if (QuizEdit->objectName().isEmpty())
            QuizEdit->setObjectName(QString::fromUtf8("QuizEdit"));
        QuizEdit->resize(782, 536);
        listWidget = new QListWidget(QuizEdit);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 70, 481, 291));
        pbutton_dodaj = new QPushButton(QuizEdit);
        pbutton_dodaj->setObjectName(QString::fromUtf8("pbutton_dodaj"));
        pbutton_dodaj->setGeometry(QRect(20, 370, 81, 23));
        pbutton_edytuj = new QPushButton(QuizEdit);
        pbutton_edytuj->setObjectName(QString::fromUtf8("pbutton_edytuj"));
        pbutton_edytuj->setEnabled(true);
        pbutton_edytuj->setGeometry(QRect(110, 370, 81, 23));
        pbutton_usun = new QPushButton(QuizEdit);
        pbutton_usun->setObjectName(QString::fromUtf8("pbutton_usun"));
        pbutton_usun->setGeometry(QRect(110, 400, 81, 23));
        pbutton_nowyTest = new QPushButton(QuizEdit);
        pbutton_nowyTest->setObjectName(QString::fromUtf8("pbutton_nowyTest"));
        pbutton_nowyTest->setGeometry(QRect(20, 10, 121, 31));
        pbutton_zapisz = new QPushButton(QuizEdit);
        pbutton_zapisz->setObjectName(QString::fromUtf8("pbutton_zapisz"));
        pbutton_zapisz->setGeometry(QRect(170, 10, 121, 31));
        pbutton_zapiszJako = new QPushButton(QuizEdit);
        pbutton_zapiszJako->setObjectName(QString::fromUtf8("pbutton_zapiszJako"));
        pbutton_zapiszJako->setGeometry(QRect(290, 10, 121, 31));
        pbutton_wczytaj = new QPushButton(QuizEdit);
        pbutton_wczytaj->setObjectName(QString::fromUtf8("pbutton_wczytaj"));
        pbutton_wczytaj->setGeometry(QRect(430, 10, 121, 31));

        retranslateUi(QuizEdit);

        QMetaObject::connectSlotsByName(QuizEdit);
    } // setupUi

    void retranslateUi(QWidget *QuizEdit)
    {
        QuizEdit->setWindowTitle(QApplication::translate("QuizEdit", "QuizEdit", 0, QApplication::UnicodeUTF8));
        pbutton_dodaj->setText(QApplication::translate("QuizEdit", "Dodaj pytanie", 0, QApplication::UnicodeUTF8));
        pbutton_edytuj->setText(QApplication::translate("QuizEdit", "Edytuj pytanie", 0, QApplication::UnicodeUTF8));
        pbutton_usun->setText(QApplication::translate("QuizEdit", "Usu\305\204 pytanie", 0, QApplication::UnicodeUTF8));
        pbutton_nowyTest->setText(QApplication::translate("QuizEdit", "Stw\303\263rz nowy test", 0, QApplication::UnicodeUTF8));
        pbutton_zapisz->setText(QApplication::translate("QuizEdit", "Zapisz zmiany", 0, QApplication::UnicodeUTF8));
        pbutton_zapiszJako->setText(QApplication::translate("QuizEdit", "Zapisz jako nowy test", 0, QApplication::UnicodeUTF8));
        pbutton_wczytaj->setText(QApplication::translate("QuizEdit", "Otw\303\263rz istniej\304\205cy test", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QuizEdit: public Ui_QuizEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZEDIT_H
