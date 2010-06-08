/********************************************************************************
** Form generated from reading UI file 'QuizShow.ui'
**
** Created: Tue Jun 8 20:39:26 2010
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
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *button_resign;
    QPushButton *button_fifty_fifty;
    QPushButton *button_phone;
    QPushButton *button_public;
    QPushButton *button_next;
    QListWidget *listWidget;
    QLabel *labelQ;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QPushButton *button_answA;
    QPushButton *button_answB;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *button_answC;
    QPushButton *button_answD;
    QLabel *label_test;

    void setupUi(QWidget *QuizShow)
    {
        if (QuizShow->objectName().isEmpty())
            QuizShow->setObjectName(QString::fromUtf8("QuizShow"));
        QuizShow->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 192, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QuizShow->setPalette(palette);
        QuizShow->setAutoFillBackground(false);
        QuizShow->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/bigbackground.png);"));
        frame = new QFrame(QuizShow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 801, 601));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/bigbackground.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 40, 81, 261));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        button_resign = new QPushButton(verticalLayoutWidget);
        button_resign->setObjectName(QString::fromUtf8("button_resign"));
        QFont font;
        font.setPointSize(12);
        button_resign->setFont(font);
        button_resign->setFlat(true);

        verticalLayout_3->addWidget(button_resign);

        button_fifty_fifty = new QPushButton(verticalLayoutWidget);
        button_fifty_fifty->setObjectName(QString::fromUtf8("button_fifty_fifty"));
        button_fifty_fifty->setFlat(true);

        verticalLayout_3->addWidget(button_fifty_fifty);

        button_phone = new QPushButton(verticalLayoutWidget);
        button_phone->setObjectName(QString::fromUtf8("button_phone"));
        button_phone->setFlat(true);

        verticalLayout_3->addWidget(button_phone);

        button_public = new QPushButton(verticalLayoutWidget);
        button_public->setObjectName(QString::fromUtf8("button_public"));
        button_public->setFlat(true);

        verticalLayout_3->addWidget(button_public);

        button_next = new QPushButton(frame);
        button_next->setObjectName(QString::fromUtf8("button_next"));
        button_next->setEnabled(true);
        button_next->setGeometry(QRect(250, 250, 221, 31));
        button_next->setFont(font);
        button_next->setFlat(true);
        listWidget = new QListWidget(frame);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(590, 10, 181, 301));
        listWidget->setFont(font);
        listWidget->setAutoScrollMargin(14);
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setProperty("showDropIndicator", QVariant(false));
        listWidget->setSelectionMode(QAbstractItemView::NoSelection);
        labelQ = new QLabel(frame);
        labelQ->setObjectName(QString::fromUtf8("labelQ"));
        labelQ->setGeometry(QRect(30, 330, 741, 131));
        QFont font1;
        font1.setPointSize(14);
        labelQ->setFont(font1);
        labelQ->setAutoFillBackground(false);
        labelQ->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget_5 = new QWidget(frame);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(30, 460, 741, 121));
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
        button_answA->setFont(font);
        button_answA->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/backgroundAnswerButton.png);"));
        button_answA->setFlat(true);

        verticalLayout->addWidget(button_answA);

        button_answB = new QPushButton(horizontalLayoutWidget_5);
        button_answB->setObjectName(QString::fromUtf8("button_answB"));
        button_answB->setEnabled(true);
        button_answB->setMinimumSize(QSize(332, 40));
        button_answB->setMaximumSize(QSize(332, 40));
        button_answB->setFont(font);
        button_answB->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/backgroundAnswerButton.png);"));
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
        button_answC->setFont(font);
        button_answC->setAutoFillBackground(false);
        button_answC->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/backgroundAnswerButton.png);"));
        button_answC->setFlat(true);

        verticalLayout_2->addWidget(button_answC);

        button_answD = new QPushButton(horizontalLayoutWidget_5);
        button_answD->setObjectName(QString::fromUtf8("button_answD"));
        button_answD->setEnabled(true);
        button_answD->setMinimumSize(QSize(332, 40));
        button_answD->setMaximumSize(QSize(332, 40));
        button_answD->setFont(font);
        button_answD->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/backgroundAnswerButton.png);"));
        button_answD->setFlat(true);

        verticalLayout_2->addWidget(button_answD);


        horizontalLayout_5->addLayout(verticalLayout_2);

        label_test = new QLabel(frame);
        label_test->setObjectName(QString::fromUtf8("label_test"));
        label_test->setGeometry(QRect(140, 20, 421, 211));

        retranslateUi(QuizShow);

        listWidget->setCurrentRow(14);


        QMetaObject::connectSlotsByName(QuizShow);
    } // setupUi

    void retranslateUi(QWidget *QuizShow)
    {
        QuizShow->setWindowTitle(QApplication::translate("QuizShow", "QuizShow", 0, QApplication::UnicodeUTF8));
        button_resign->setText(QApplication::translate("QuizShow", "R", 0, QApplication::UnicodeUTF8));
        button_fifty_fifty->setText(QApplication::translate("QuizShow", "1/2", 0, QApplication::UnicodeUTF8));
        button_phone->setText(QApplication::translate("QuizShow", "T", 0, QApplication::UnicodeUTF8));
        button_public->setText(QApplication::translate("QuizShow", "P", 0, QApplication::UnicodeUTF8));
        button_next->setText(QApplication::translate("QuizShow", "Kliknij aby rozpocz\304\205\304\207 gr\304\231", 0, QApplication::UnicodeUTF8));

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

        labelQ->setText(QApplication::translate("QuizShow", "Tre\305\233\304\207 pytania", 0, QApplication::UnicodeUTF8));
        button_answA->setText(QApplication::translate("QuizShow", "odpA", 0, QApplication::UnicodeUTF8));
        button_answB->setText(QApplication::translate("QuizShow", "odpB", 0, QApplication::UnicodeUTF8));
        button_answC->setText(QApplication::translate("QuizShow", "odpC", 0, QApplication::UnicodeUTF8));
        button_answD->setText(QApplication::translate("QuizShow", "odpD", 0, QApplication::UnicodeUTF8));
        label_test->setText(QApplication::translate("QuizShow", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QuizShow: public Ui_QuizShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZSHOW_H
