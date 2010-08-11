/********************************************************************************
** Form generated from reading UI file 'QuizShow.ui'
**
** Created: Mon Aug 9 20:15:15 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZSHOW_H
#define UI_QUIZSHOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuizShow
{
public:
    QLabel *labelBack;
    QLabel *labelQ;
    QPushButton *button_next;
    QLabel *label_test;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QPushButton *button_answA;
    QPushButton *button_answB;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *button_answC;
    QPushButton *button_answD;
    QFrame *frame_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_resign;
    QPushButton *button_fifty_fifty;
    QPushButton *button_phone;
    QPushButton *button_public;
    QListWidget *listWidget;

    void setupUi(QWidget *QuizShow)
    {
        if (QuizShow->objectName().isEmpty())
            QuizShow->setObjectName(QString::fromUtf8("QuizShow"));
        QuizShow->resize(744, 600);
        QuizShow->setAutoFillBackground(false);
        labelBack = new QLabel(QuizShow);
        labelBack->setObjectName(QString::fromUtf8("labelBack"));
        labelBack->setGeometry(QRect(20, 0, 431, 231));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(14);
        labelBack->setFont(font);
        labelBack->setAutoFillBackground(false);
        labelBack->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/cloud.png);\n"
"background-repeat: no-repeat;\n"
"background-color: none;"));
        labelBack->setAlignment(Qt::AlignCenter);
        labelQ = new QLabel(QuizShow);
        labelQ->setObjectName(QString::fromUtf8("labelQ"));
        labelQ->setGeometry(QRect(50, 30, 361, 121));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Comic Sans MS"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        labelQ->setFont(font1);
        labelQ->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color: white;"));
        labelQ->setAlignment(Qt::AlignCenter);
        button_next = new QPushButton(QuizShow);
        button_next->setObjectName(QString::fromUtf8("button_next"));
        button_next->setEnabled(true);
        button_next->setGeometry(QRect(20, 400, 171, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Comic Sans MS"));
        font2.setPointSize(12);
        button_next->setFont(font2);
        button_next->setAutoFillBackground(false);
        button_next->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 128);\n"
"color: rgb(255, 250, 249);\n"
"border-radius: 10px;"));
        button_next->setFlat(true);
        label_test = new QLabel(QuizShow);
        label_test->setObjectName(QString::fromUtf8("label_test"));
        label_test->setGeometry(QRect(210, 200, 301, 261));
        label_test->setAutoFillBackground(false);
        label_test->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/man_on_chair.png);\n"
"background-repeat: no-repeat;\n"
"background-color: none;"));
        horizontalLayoutWidget_5 = new QWidget(QuizShow);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(20, 470, 711, 121));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        button_answA = new QPushButton(horizontalLayoutWidget_5);
        button_answA->setObjectName(QString::fromUtf8("button_answA"));
        button_answA->setEnabled(true);
        button_answA->setMinimumSize(QSize(332, 40));
        button_answA->setMaximumSize(QSize(332, 40));
        button_answA->setFont(font2);
        button_answA->setAutoFillBackground(false);
        button_answA->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 128);\n"
"background-image: url();\n"
"color: rgb(255, 250, 249);\n"
"border-radius: 10px;"));
        button_answA->setInputMethodHints(Qt::ImhNone);
        button_answA->setFlat(true);

        verticalLayout->addWidget(button_answA);

        button_answB = new QPushButton(horizontalLayoutWidget_5);
        button_answB->setObjectName(QString::fromUtf8("button_answB"));
        button_answB->setEnabled(true);
        button_answB->setMinimumSize(QSize(332, 40));
        button_answB->setMaximumSize(QSize(332, 40));
        button_answB->setFont(font2);
        button_answB->setAutoFillBackground(false);
        button_answB->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 128);\n"
"color: rgb(255, 250, 249);\n"
"border-radius: 10px;\n"
"background-image: url();"));
        button_answB->setFlat(true);

        verticalLayout->addWidget(button_answB);


        horizontalLayout_5->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        button_answC = new QPushButton(horizontalLayoutWidget_5);
        button_answC->setObjectName(QString::fromUtf8("button_answC"));
        button_answC->setEnabled(true);
        button_answC->setMinimumSize(QSize(332, 40));
        button_answC->setMaximumSize(QSize(332, 40));
        button_answC->setFont(font2);
        button_answC->setAutoFillBackground(false);
        button_answC->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 128);\n"
"color: rgb(255, 250, 249);\n"
"border-radius: 10px;\n"
""));
        button_answC->setFlat(true);

        verticalLayout_2->addWidget(button_answC);

        button_answD = new QPushButton(horizontalLayoutWidget_5);
        button_answD->setObjectName(QString::fromUtf8("button_answD"));
        button_answD->setEnabled(true);
        button_answD->setMinimumSize(QSize(332, 40));
        button_answD->setMaximumSize(QSize(332, 40));
        button_answD->setFont(font2);
        button_answD->setAutoFillBackground(false);
        button_answD->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 128);\n"
"color: rgb(255, 250, 249);\n"
"border-radius: 10px;\n"
"background-image: url();"));
        button_answD->setAutoDefault(false);
        button_answD->setFlat(true);

        verticalLayout_2->addWidget(button_answD);


        horizontalLayout_5->addLayout(verticalLayout_2);

        frame_2 = new QFrame(QuizShow);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(460, 50, 261, 61));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 128);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget = new QWidget(frame_2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 261, 62));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        button_resign = new QPushButton(horizontalLayoutWidget);
        button_resign->setObjectName(QString::fromUtf8("button_resign"));
        button_resign->setMinimumSize(QSize(60, 60));
        button_resign->setMaximumSize(QSize(60, 60));
        QFont font3;
        font3.setPointSize(12);
        button_resign->setFont(font3);
        button_resign->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/exit.png);\n"
"background-repeat: no-repeat;\n"
"background-color: none;"));
        button_resign->setFlat(true);

        horizontalLayout->addWidget(button_resign);

        button_fifty_fifty = new QPushButton(horizontalLayoutWidget);
        button_fifty_fifty->setObjectName(QString::fromUtf8("button_fifty_fifty"));
        button_fifty_fifty->setMinimumSize(QSize(60, 60));
        button_fifty_fifty->setMaximumSize(QSize(60, 60));
        button_fifty_fifty->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/fifty.png);\n"
"background-repeat: no-repeat;\n"
"background-color: none;"));
        button_fifty_fifty->setFlat(true);

        horizontalLayout->addWidget(button_fifty_fifty);

        button_phone = new QPushButton(horizontalLayoutWidget);
        button_phone->setObjectName(QString::fromUtf8("button_phone"));
        button_phone->setMinimumSize(QSize(60, 60));
        button_phone->setMaximumSize(QSize(60, 60));
        button_phone->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/phone.png);\n"
"background-repeat: no-repeat;\n"
"background-color: none;"));
        button_phone->setFlat(true);

        horizontalLayout->addWidget(button_phone);

        button_public = new QPushButton(horizontalLayoutWidget);
        button_public->setObjectName(QString::fromUtf8("button_public"));
        button_public->setMinimumSize(QSize(60, 60));
        button_public->setMaximumSize(QSize(60, 60));
        button_public->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/public.png);\n"
"background-repeat: no-repeat;\n"
"background-color: none;"));
        button_public->setFlat(true);

        horizontalLayout->addWidget(button_public);

        listWidget = new QListWidget(QuizShow);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        QBrush brush(QColor(255, 255, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setForeground(brush);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        QBrush brush1(QColor(255, 255, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        QBrush brush2(QColor(0, 0, 192, 255));
        brush2.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setBackground(brush2);
        __qlistwidgetitem1->setForeground(brush1);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(540, 150, 181, 301));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Comic Sans MS"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        listWidget->setFont(font4);
        listWidget->setAutoFillBackground(true);
        listWidget->setStyleSheet(QString::fromUtf8("color: rgb(255, 250, 249);\n"
"background-color: rgb(0, 0, 128);\n"
"background-image: url();"));
        listWidget->setAutoScrollMargin(14);
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setProperty("showDropIndicator", QVariant(false));
        listWidget->setSelectionMode(QAbstractItemView::NoSelection);
        listWidget->setLayoutMode(QListView::Batched);
        listWidget->setSpacing(0);
        listWidget->setViewMode(QListView::ListMode);
        listWidget->setModelColumn(0);

        retranslateUi(QuizShow);

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(QuizShow);
    } // setupUi

    void retranslateUi(QWidget *QuizShow)
    {
        QuizShow->setWindowTitle(QApplication::translate("QuizShow", "QuizShow", 0, QApplication::UnicodeUTF8));
        labelBack->setText(QString());
        labelQ->setText(QApplication::translate("QuizShow", "Witaj na teleturnieju QMilion!", 0, QApplication::UnicodeUTF8));
        button_next->setText(QApplication::translate("QuizShow", "Rozpocznij gr\304\231!", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_test->setToolTip(QApplication::translate("QuizShow", "Aby wyj\305\233\304\207 z programu wci\305\233nij Ctrl + E", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_test->setText(QString());
        button_answA->setText(QString());
        button_answB->setText(QString());
        button_answC->setText(QString());
        button_answD->setText(QString());
#ifndef QT_NO_TOOLTIP
        button_resign->setToolTip(QApplication::translate("QuizShow", "Rezygnacja gracza", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        button_resign->setText(QString());
#ifndef QT_NO_TOOLTIP
        button_fifty_fifty->setToolTip(QApplication::translate("QuizShow", "P\303\263\305\202 na p\303\263\305\202", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        button_fifty_fifty->setText(QString());
#ifndef QT_NO_TOOLTIP
        button_phone->setToolTip(QApplication::translate("QuizShow", "Telefon do przyjaciela.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        button_phone->setText(QString());
#ifndef QT_NO_TOOLTIP
        button_public->setToolTip(QApplication::translate("QuizShow", "Publiczno\305\233\304\207", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        button_public->setText(QString());

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QuizShow", "15    1 MILION", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QuizShow", "14    500000", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QuizShow", "13    250000", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QuizShow", "12    125000", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QuizShow", "11    64000", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("QuizShow", "10    32000", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("QuizShow", " 9     16000", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("QuizShow", " 8     8000", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("QuizShow", " 7     4000", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem9 = listWidget->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("QuizShow", " 6     2000", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem10 = listWidget->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("QuizShow", " 5     1000", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem11 = listWidget->item(11);
        ___qlistwidgetitem11->setText(QApplication::translate("QuizShow", " 4     500", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem12 = listWidget->item(12);
        ___qlistwidgetitem12->setText(QApplication::translate("QuizShow", " 3     300", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem13 = listWidget->item(13);
        ___qlistwidgetitem13->setText(QApplication::translate("QuizShow", " 2     200", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem14 = listWidget->item(14);
        ___qlistwidgetitem14->setText(QApplication::translate("QuizShow", " 1     100", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class QuizShow: public Ui_QuizShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZSHOW_H
