/********************************************************************************
** Form generated from reading UI file 'questeditor.ui'
**
** Created: Fri 14. May 23:41:35 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTEDITOR_H
#define UI_QUESTEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuestEditor
{
public:
    QComboBox *poziom;
    QComboBox *poprawna;
    QTextEdit *tresc;
    QLineEdit *odpA;
    QLineEdit *odpB;
    QLineEdit *odpC;
    QLineEdit *odpD;
    QLabel *label_poziom;
    QLabel *label_poprawna;
    QLabel *label_tresc;
    QLabel *label_A;
    QLabel *label_B;
    QLabel *label_C;
    QLabel *label_D;
    QPushButton *pbutton_OK;
    QPushButton *pbutton_Anuluj;

    void setupUi(QWidget *QuestEditor)
    {
        if (QuestEditor->objectName().isEmpty())
            QuestEditor->setObjectName(QString::fromUtf8("QuestEditor"));
        QuestEditor->resize(519, 344);
        poziom = new QComboBox(QuestEditor);
        poziom->setObjectName(QString::fromUtf8("poziom"));
        poziom->setGeometry(QRect(380, 200, 111, 22));
        poprawna = new QComboBox(QuestEditor);
        poprawna->setObjectName(QString::fromUtf8("poprawna"));
        poprawna->setGeometry(QRect(378, 260, 121, 22));
        tresc = new QTextEdit(QuestEditor);
        tresc->setObjectName(QString::fromUtf8("tresc"));
        tresc->setGeometry(QRect(20, 30, 481, 111));
        odpA = new QLineEdit(QuestEditor);
        odpA->setObjectName(QString::fromUtf8("odpA"));
        odpA->setGeometry(QRect(80, 170, 271, 20));
        odpB = new QLineEdit(QuestEditor);
        odpB->setObjectName(QString::fromUtf8("odpB"));
        odpB->setGeometry(QRect(80, 200, 271, 20));
        odpC = new QLineEdit(QuestEditor);
        odpC->setObjectName(QString::fromUtf8("odpC"));
        odpC->setGeometry(QRect(80, 230, 271, 20));
        odpD = new QLineEdit(QuestEditor);
        odpD->setObjectName(QString::fromUtf8("odpD"));
        odpD->setGeometry(QRect(80, 260, 271, 20));
        label_poziom = new QLabel(QuestEditor);
        label_poziom->setObjectName(QString::fromUtf8("label_poziom"));
        label_poziom->setGeometry(QRect(380, 180, 81, 20));
        label_poprawna = new QLabel(QuestEditor);
        label_poprawna->setObjectName(QString::fromUtf8("label_poprawna"));
        label_poprawna->setGeometry(QRect(380, 240, 121, 20));
        label_tresc = new QLabel(QuestEditor);
        label_tresc->setObjectName(QString::fromUtf8("label_tresc"));
        label_tresc->setGeometry(QRect(20, 10, 121, 16));
        label_A = new QLabel(QuestEditor);
        label_A->setObjectName(QString::fromUtf8("label_A"));
        label_A->setGeometry(QRect(10, 170, 71, 20));
        label_B = new QLabel(QuestEditor);
        label_B->setObjectName(QString::fromUtf8("label_B"));
        label_B->setGeometry(QRect(10, 200, 71, 20));
        label_C = new QLabel(QuestEditor);
        label_C->setObjectName(QString::fromUtf8("label_C"));
        label_C->setGeometry(QRect(10, 230, 71, 16));
        label_D = new QLabel(QuestEditor);
        label_D->setObjectName(QString::fromUtf8("label_D"));
        label_D->setGeometry(QRect(10, 260, 71, 16));
        pbutton_OK = new QPushButton(QuestEditor);
        pbutton_OK->setObjectName(QString::fromUtf8("pbutton_OK"));
        pbutton_OK->setGeometry(QRect(20, 300, 101, 31));
        pbutton_Anuluj = new QPushButton(QuestEditor);
        pbutton_Anuluj->setObjectName(QString::fromUtf8("pbutton_Anuluj"));
        pbutton_Anuluj->setGeometry(QRect(130, 300, 101, 31));

        retranslateUi(QuestEditor);

        QMetaObject::connectSlotsByName(QuestEditor);
    } // setupUi

    void retranslateUi(QWidget *QuestEditor)
    {
        QuestEditor->setWindowTitle(QApplication::translate("QuestEditor", "Form", 0, QApplication::UnicodeUTF8));
        poziom->clear();
        poziom->insertItems(0, QStringList()
         << QApplication::translate("QuestEditor", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuestEditor", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuestEditor", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuestEditor", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuestEditor", "5", 0, QApplication::UnicodeUTF8)
        );
        poprawna->clear();
        poprawna->insertItems(0, QStringList()
         << QApplication::translate("QuestEditor", "A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuestEditor", "B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuestEditor", "C", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuestEditor", "D", 0, QApplication::UnicodeUTF8)
        );
        label_poziom->setText(QApplication::translate("QuestEditor", "Poziom pytania:", 0, QApplication::UnicodeUTF8));
        label_poprawna->setText(QApplication::translate("QuestEditor", "Prawid\305\202owa odpowied\305\272:", 0, QApplication::UnicodeUTF8));
        label_tresc->setText(QApplication::translate("QuestEditor", "Tre\305\233\304\207 zadania:", 0, QApplication::UnicodeUTF8));
        label_A->setText(QApplication::translate("QuestEditor", "odpowied\305\272 A:", 0, QApplication::UnicodeUTF8));
        label_B->setText(QApplication::translate("QuestEditor", "odpowied\305\272 B:", 0, QApplication::UnicodeUTF8));
        label_C->setText(QApplication::translate("QuestEditor", "odpowied\305\272 C:", 0, QApplication::UnicodeUTF8));
        label_D->setText(QApplication::translate("QuestEditor", "odpowied\305\272 D:", 0, QApplication::UnicodeUTF8));
        pbutton_OK->setText(QApplication::translate("QuestEditor", "OK", 0, QApplication::UnicodeUTF8));
        pbutton_Anuluj->setText(QApplication::translate("QuestEditor", "Anuluj", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QuestEditor: public Ui_QuestEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTEDITOR_H
