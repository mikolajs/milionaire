/********************************************************************************
** Form generated from reading UI file 'QuizEdit.ui'
**
** Created: Thu Aug 5 20:47:07 2010
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
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuizEdit
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_previous;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_next;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_A;
    QLabel *label_3;
    QLineEdit *lineEdit_B;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_C;
    QLabel *label_5;
    QLineEdit *lineEdit_D;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbutton_dodaj;
    QPushButton *pbutton_edytuj;
    QPushButton *pbutton_usun;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pbutton_wczytaj;
    QPushButton *pbutton_nowyTest;
    QPushButton *pbutton_zapisz;
    QPushButton *pbutton_zapiszJako;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_3;
    QLabel *label_11;
    QLineEdit *lineEdit_5;
    QLabel *label_12;
    QLineEdit *lineEdit_6;
    QLabel *label_13;
    QLineEdit *lineEdit_7;
    QLabel *label_14;
    QLineEdit *lineEdit_8;

    void setupUi(QWidget *QuizEdit)
    {
        if (QuizEdit->objectName().isEmpty())
            QuizEdit->setObjectName(QString::fromUtf8("QuizEdit"));
        QuizEdit->resize(800, 487);
        verticalLayoutWidget = new QWidget(QuizEdit);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 100, 451, 341));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_previous = new QPushButton(verticalLayoutWidget);
        pushButton_previous->setObjectName(QString::fromUtf8("pushButton_previous"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/main/images/arrow-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_previous->setIcon(icon);
        pushButton_previous->setIconSize(QSize(22, 22));

        horizontalLayout_7->addWidget(pushButton_previous);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        pushButton_next = new QPushButton(verticalLayoutWidget);
        pushButton_next->setObjectName(QString::fromUtf8("pushButton_next"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/main/images/arrow-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_next->setIcon(icon1);
        pushButton_next->setIconSize(QSize(22, 22));

        horizontalLayout_7->addWidget(pushButton_next);


        verticalLayout->addLayout(horizontalLayout_7);

        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        lineEdit_A = new QLineEdit(verticalLayoutWidget);
        lineEdit_A->setObjectName(QString::fromUtf8("lineEdit_A"));

        horizontalLayout_3->addWidget(lineEdit_A);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        lineEdit_B = new QLineEdit(verticalLayoutWidget);
        lineEdit_B->setObjectName(QString::fromUtf8("lineEdit_B"));

        horizontalLayout_3->addWidget(lineEdit_B);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        lineEdit_C = new QLineEdit(verticalLayoutWidget);
        lineEdit_C->setObjectName(QString::fromUtf8("lineEdit_C"));

        horizontalLayout_4->addWidget(lineEdit_C);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        lineEdit_D = new QLineEdit(verticalLayoutWidget);
        lineEdit_D->setObjectName(QString::fromUtf8("lineEdit_D"));

        horizontalLayout_4->addWidget(lineEdit_D);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout->addWidget(label_6);

        comboBox_2 = new QComboBox(verticalLayoutWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbutton_dodaj = new QPushButton(verticalLayoutWidget);
        pbutton_dodaj->setObjectName(QString::fromUtf8("pbutton_dodaj"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/main/images/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbutton_dodaj->setIcon(icon2);
        pbutton_dodaj->setIconSize(QSize(22, 22));
        pbutton_dodaj->setDefault(true);

        horizontalLayout_2->addWidget(pbutton_dodaj);

        pbutton_edytuj = new QPushButton(verticalLayoutWidget);
        pbutton_edytuj->setObjectName(QString::fromUtf8("pbutton_edytuj"));
        pbutton_edytuj->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/main/images/edit-redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbutton_edytuj->setIcon(icon3);
        pbutton_edytuj->setIconSize(QSize(22, 22));

        horizontalLayout_2->addWidget(pbutton_edytuj);

        pbutton_usun = new QPushButton(verticalLayoutWidget);
        pbutton_usun->setObjectName(QString::fromUtf8("pbutton_usun"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/main/images/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbutton_usun->setIcon(icon4);
        pbutton_usun->setIconSize(QSize(22, 22));

        horizontalLayout_2->addWidget(pbutton_usun);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayoutWidget_2 = new QWidget(QuizEdit);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(470, 0, 321, 441));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(verticalLayoutWidget_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);

        verticalLayoutWidget_3 = new QWidget(QuizEdit);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 0, 456, 97));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pbutton_wczytaj = new QPushButton(verticalLayoutWidget_3);
        pbutton_wczytaj->setObjectName(QString::fromUtf8("pbutton_wczytaj"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/main/images/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbutton_wczytaj->setIcon(icon5);
        pbutton_wczytaj->setIconSize(QSize(22, 22));

        horizontalLayout_6->addWidget(pbutton_wczytaj);

        pbutton_nowyTest = new QPushButton(verticalLayoutWidget_3);
        pbutton_nowyTest->setObjectName(QString::fromUtf8("pbutton_nowyTest"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/main/images/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbutton_nowyTest->setIcon(icon6);
        pbutton_nowyTest->setIconSize(QSize(22, 22));

        horizontalLayout_6->addWidget(pbutton_nowyTest);

        pbutton_zapisz = new QPushButton(verticalLayoutWidget_3);
        pbutton_zapisz->setObjectName(QString::fromUtf8("pbutton_zapisz"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/main/images/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbutton_zapisz->setIcon(icon7);
        pbutton_zapisz->setIconSize(QSize(22, 22));

        horizontalLayout_6->addWidget(pbutton_zapisz);

        pbutton_zapiszJako = new QPushButton(verticalLayoutWidget_3);
        pbutton_zapiszJako->setObjectName(QString::fromUtf8("pbutton_zapiszJako"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/main/images/document-save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbutton_zapiszJako->setIcon(icon8);
        pbutton_zapiszJako->setIconSize(QSize(22, 22));

        horizontalLayout_6->addWidget(pbutton_zapiszJako);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout_5->addWidget(label_8);

        lineEdit = new QLineEdit(verticalLayoutWidget_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        horizontalLayout_8->addWidget(label_7);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_8->addWidget(lineEdit_2);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayoutWidget_2 = new QWidget(QuizEdit);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 450, 781, 31));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(horizontalLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        horizontalLayout_9->addWidget(label_9);

        label_10 = new QLabel(horizontalLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        horizontalLayout_9->addWidget(label_10);

        lineEdit_3 = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_3);

        label_11 = new QLabel(horizontalLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        horizontalLayout_9->addWidget(label_11);

        lineEdit_5 = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_5);

        label_12 = new QLabel(horizontalLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        horizontalLayout_9->addWidget(label_12);

        lineEdit_6 = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_6);

        label_13 = new QLabel(horizontalLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        horizontalLayout_9->addWidget(label_13);

        lineEdit_7 = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_7);

        label_14 = new QLabel(horizontalLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        horizontalLayout_9->addWidget(label_14);

        lineEdit_8 = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_8);


        retranslateUi(QuizEdit);

        QMetaObject::connectSlotsByName(QuizEdit);
    } // setupUi

    void retranslateUi(QWidget *QuizEdit)
    {
        QuizEdit->setWindowTitle(QApplication::translate("QuizEdit", "QuizEdit", 0, QApplication::UnicodeUTF8));
        pushButton_previous->setText(QString());
        pushButton_next->setText(QString());
        label_2->setText(QApplication::translate("QuizEdit", "A", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QuizEdit", "B", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QuizEdit", "C", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QuizEdit", "D", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QuizEdit", "prawid\305\202owa", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("QuizEdit", "A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuizEdit", "B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuizEdit", "C", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuizEdit", "D", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("QuizEdit", "poziom", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("QuizEdit", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuizEdit", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuizEdit", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuizEdit", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuizEdit", "5", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        pbutton_dodaj->setToolTip(QApplication::translate("QuizEdit", "Dodaj jako nowe pytanie", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbutton_dodaj->setText(QApplication::translate("QuizEdit", "Dodaj", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbutton_edytuj->setToolTip(QApplication::translate("QuizEdit", "Zapisz edytowane pytanie", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbutton_edytuj->setText(QApplication::translate("QuizEdit", "Nadpisz", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbutton_usun->setToolTip(QApplication::translate("QuizEdit", "Usu\305\204 widoczne pytanie", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbutton_usun->setText(QApplication::translate("QuizEdit", "Usu\305\204", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbutton_wczytaj->setToolTip(QApplication::translate("QuizEdit", "Otw\303\263rz plik z pytaniami", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbutton_wczytaj->setText(QApplication::translate("QuizEdit", "Otw\303\263rz", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbutton_nowyTest->setToolTip(QApplication::translate("QuizEdit", "Stw\303\263rz nowy plik z pytaniami", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbutton_nowyTest->setText(QApplication::translate("QuizEdit", "Nowy", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbutton_zapisz->setToolTip(QApplication::translate("QuizEdit", "Zapisz obecny plik", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbutton_zapisz->setText(QApplication::translate("QuizEdit", "Zapisz", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbutton_zapiszJako->setToolTip(QApplication::translate("QuizEdit", "Zapisz plik pod now\304\205 nazw\304\205", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbutton_zapiszJako->setText(QApplication::translate("QuizEdit", "Zapisz jako", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QuizEdit", "Plik testu: ", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QuizEdit", "Opis:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QuizEdit", "Ilo\305\233\304\207 pyta\305\204 wed\305\202ug poziom\303\263w:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("QuizEdit", " 1:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("QuizEdit", " 2:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("QuizEdit", " 3:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("QuizEdit", " 4:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("QuizEdit", " 5:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QuizEdit: public Ui_QuizEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZEDIT_H
