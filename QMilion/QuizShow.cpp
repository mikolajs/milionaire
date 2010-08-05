#include "QuizShow.h"
#include "ui_QuizShow.h"
#include <QTimer>
#include <QAction>
#include <QMenu>
#include <QToolBar>
#include <QKeyEvent>
#include <QDebug>
#include <QSize>

QuizShow::QuizShow( QWidget *parent)
    : QWidget(parent), ui(new Ui::QuizShow)
{

    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    ui->setupUi(this);

    rawConnectSlots();

    qtimer = new QTimer(this);
    qtimer->setInterval(2000);
    //qtimer->stop(); //potrzebne????

    connect (qtimer, SIGNAL(timeout()),this, SLOT( showQuestion()));

}


//odświeżenie danych @path - pełna ścieżka do pliku xml z testami
void QuizShow::refreshData(QString path)
{
    selectedAnswer = 'N';
    actualQuestion = 0;

    //ładuje pytania z pliku
    questions.set_filename(path);
    questions.loadFile();
    questions.makeQuestListContener();


    connectSlots();
    //wyłączam flagi używania kół ratunkowych
    fiftyUsed = false;
    publicUsed = false;
    phoneUsed = false;
   //włączam flagę zaznaczonej odpowiedzi (aby można było kliknąć "Rozpocznij grę!"
    answerIsChoosen = true;
    //odznaczam pytania
    makeSelectAnswer();

    ui->labelQ->setText("Witaj w turnieju QMilion!");
}


//podłączenie slotów - prawdziwe
void QuizShow::rawConnectSlots()
{
    connect(ui->button_answA,SIGNAL(clicked()),this,SLOT(selectAnswerA()));
    connect(ui->button_answB,SIGNAL(clicked()),this,SLOT(selectAnswerB()));
    connect(ui->button_answC,SIGNAL(clicked()),this,SLOT(selectAnswerC()));
    connect(ui->button_answD,SIGNAL(clicked()),this,SLOT(selectAnswerD()));
    connect(ui->button_next,SIGNAL(clicked()),this,SLOT(showPrice()));
    connect(ui->button_resign,SIGNAL(clicked()),this,SLOT(resignAction()));
    connect(ui->button_public,SIGNAL(clicked()),this,SLOT(publicAction()));
    connect(ui->button_fifty_fifty,SIGNAL(clicked()),this,SLOT(fifty_fiftyAction()));
    connect(ui->button_phone,SIGNAL(clicked()),this,SLOT(phoneAction()));
}

//ustawienie flagi zamiast włączania slotów
void QuizShow::connectSlots() { slotsDisabled = false;}
//ustawienie flagi zamiast wyłączanie slotów
void QuizShow::disconnectSlots() { slotsDisabled = true; }

//>>>>>>>>>>>>>>>>>>>>>> slots >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

void QuizShow::selectAnswerA()
{
    if (slotsDisabled) return;
    answerIsChoosen = true;
    selectedAnswer = 'A';
    makeSelectAnswer();
}

void QuizShow::selectAnswerB()
{
     if (slotsDisabled) return;
     answerIsChoosen = true;
    selectedAnswer = 'B';
    makeSelectAnswer();
}

void QuizShow::selectAnswerC()
{
     if (slotsDisabled) return;
     answerIsChoosen = true;
    selectedAnswer = 'C';
    makeSelectAnswer();
}

void QuizShow::selectAnswerD()
{
     if (slotsDisabled) return;
     answerIsChoosen = true;
    selectedAnswer = 'D';
    makeSelectAnswer();
}

void QuizShow::resignAction()
{
    if (slotsDisabled) return;
    //dodać obsługę wartości gwarantowanej!!!
    QString info;
    if (actualQuestion > 0) {
        int row = ui->listWidget->currentRow();
        if (row < 15) {
            row++;
            QListWidgetItem* item = ui->listWidget->item(row);

            QString wonSumString = item->text();
            wonSumString = wonSumString.right(wonSumString.length() - 4).trimmed();
            info += "Koniec gry! \n Gratuluje wygrałeś ";
            info += wonSumString + "!";
            info += "\n Prawidłowa odpowiedź: ";
            selectedAnswer = quest.correct;
            makeSelectAnswer();
        }
        else {
            info += "Niestety nic nie wygrałeś!";
        }
        actualQuestion = 0;
        //showQuestion();
        ui->button_next->setText("Rozpocznij grę!");
        ui->labelQ->setText(info);
        answerIsChoosen = true;
    }
}

void QuizShow::showFullWins()
{
     ui->labelQ->setText("Gratuluje wygrałeś 1 000 000 !");
     answerIsChoosen = true;
     actualQuestion = 0;
      ui->button_next->setText("Rozpocznij grę!");
}

void QuizShow::fifty_fiftyAction()
{
    if (slotsDisabled) return;
    if (fiftyUsed) return;
    fiftyUsed = true;
    //zabezpieczam aby użytkownik musiał jeszcze raz wybrać odpowiedź
    selectedAnswer = 'N';
    makeSelectAnswer();
    answerIsChoosen = false;
    //!!!!! niepoprawne działanie czasami usuwa tylko jedną odpowiedź
    int notProper1 = -1;
    int notProper2 = -1;
    int random;
    //pobieram prawidłową odpowiedź 65 to wartość A w ascii
    int correct = int(quest.correct.toAscii()) - 65;
    Q_ASSERT(correct >= 0 || correct <= 3);

    while( notProper1 == -1) {
       random = questions.getRand(4);
       if (random != correct) {
           notProper1 = random;
       }
    }

    while( notProper2 == -1) {
       random = questions.getRand(4);
       if (random != correct && random != notProper2 ) {
           notProper2 = random;
       }
    }
    

        switch (notProper1) {
        case 0:
            ui->button_answA->hide();
            break;
        case 1:
            ui->button_answB->hide();
            break;
        case 2:
            ui->button_answC->hide();
            break;
        case 3:
            ui->button_answD->hide();
            break;
        }

        switch (notProper2) {
        case 0:
            ui->button_answA->hide();
            break;
        case 1:
            ui->button_answB->hide();
            break;
        case 2:
            ui->button_answC->hide();
            break;
        case 3:
            ui->button_answD->hide();
            break;
        }

    //wyłączenie
    ui->button_fifty_fifty->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/fifty_no.png);\n background-repeat: no-repeat;"));

}

///pomoc publiczności
void QuizShow::publicAction()
{
     if (slotsDisabled) return;
     if (publicUsed) return;

     //zabezpieczam aby użytkownik musiał jeszcze raz wybrać odpowiedź
     selectedAnswer = 'N';
     makeSelectAnswer();
     answerIsChoosen = false;

     publicUsed = true;
     ui->button_public->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/public_no.png);\n background-repeat: no-repeat;"));

    //na razie brak kodu wersja szkolna
}

//telefon do przyjaciela
void QuizShow::phoneAction()
{
     if (slotsDisabled) return;
     if (phoneUsed) return;

     //zabezpieczam aby użytkownik musiał jeszcze raz wybrać odpowiedź
     selectedAnswer = 'N';
     makeSelectAnswer();
     answerIsChoosen = false;

     phoneUsed = true;
      ui->button_phone->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/phone_no.png);\n background-repeat: no-repeat;"));

    //na razie brak kodu - wersja szkolna
}

//ustawienie podświetlania klikniętej odpowiedzi
void QuizShow::makeSelectAnswer()
{
    //podmieniania obrazków pod button_answX
    QString styleNotClicked =  QString::fromUtf8("background-color: rgb(0,0,128); color:white; border-radius: 10px;");
    QString styleClicked = QString::fromUtf8("background-color: rgb(255,255,0); color:white; border-radius: 10px; ");
    ui->button_answA->setStyleSheet(styleNotClicked);
    ui->button_answB->setStyleSheet(styleNotClicked);
    ui->button_answC->setStyleSheet(styleNotClicked);
    ui->button_answD->setStyleSheet(styleNotClicked);
    switch (selectedAnswer.toAscii()) {
    case 'A':
        ui->button_answA->setStyleSheet(styleClicked);
        break;
    case 'B':
        ui->button_answB->setStyleSheet(styleClicked);
        break;
    case 'C':
        ui->button_answC->setStyleSheet(styleClicked);
        break;
    case 'D':
        ui->button_answD->setStyleSheet(styleClicked);
        break;
    }
}


//pokaz wygranej główna funkcja obsługująca poprawność odpowiedzi
void QuizShow::showPrice()
{

    if (slotsDisabled) return;

    if (!answerIsChoosen) return;

    Q_ASSERT(actualQuestion < 16);

   qtimer->stop(); //zatrzymuje zegar aby nie odliczał i nie uruchomił znowu slotu


   if (actualQuestion == 0) {
       //przywrócone koła ratunkowe
        ui->button_fifty_fifty->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/fifty.png);\n background-repeat: no-repeat;"));
       ui->button_phone->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/phone.png);\n background-repeat: no-repeat;"));
       ui->button_public->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/public.png);\n background-repeat: no-repeat;"));
       fiftyUsed = false;
       publicUsed = false;
       phoneUsed = false;

       if (!questions.checkCanPerformQuiz()) {
           ui->labelQ->setText("Za mało pytań, musi być ich \n co najmniej po 3 na każdy z pięciu poziomów! ");
           return;
       }
       else {

           ui->listWidget->setCurrentRow(15,QItemSelectionModel::SelectCurrent);
           quest = questions.getQuest(1 + actualQuestion / 3);
           actualQuestion++;
           showQuestion();
           return;

       }
   }

   if (actualQuestion == 15) {
        showFullWins();
        return;
    }
   //sprawdzenie poprawności odpowiedzi
   if (actualQuestion > 0){
       if (quest.correct != selectedAnswer) {
           QString answer = "Nieprawidłowa odpowiedź. Koniec gry!";
           int level = 15 - ui->listWidget->currentRow();
           if (level >= 10 ) {
               answer += "\nTwoja gwarantowana wygrana: 32 000";
           } else if (level >= 5) {
               answer += "\nTwoja gwarantowana wygrana: 1 000";
           } else answer += "\nNiestety nic nie wygrałeś.";
           answer +=  "\nPrawidłowa odpowiedź: ";
           ui->labelQ->setText(answer);
           selectedAnswer = quest.correct;
           actualQuestion = 0;
           ui->button_next->setText("Rozpocznij grę!");
           answerIsChoosen = true;
           connectSlots();
           //showQuestion();
           return;
       }

        QString temp = "Wygrałeś ";
        int row = ui->listWidget->currentRow();
        if (row < 0 || row >15) {
            ui->labelQ->setText("Błąd programu!!!");
            return;
        }
        QListWidgetItem* item = ui->listWidget->item(row);
        QString wonSumString = item->text();
        wonSumString = wonSumString.right(wonSumString.length() - 4).trimmed();
        temp += wonSumString;
        ui->labelQ->setText(temp);
        qtimer->start();
        disconnectSlots();
        quest = questions.getQuest(1 + actualQuestion / 3);
        actualQuestion++; //powinno być instrukcję wyżej ale nie chce mi się odejmować wyżej 1
        return;
   }



}



//wyświetlenie pytania
void QuizShow::showQuestion()
{

    qtimer->stop();
    if (slotsDisabled) {
        connectSlots();
    }

    //usuwam wybraną odpowiedź
    if (ui->button_answA->isHidden()) ui->button_answA->show();
    if (ui->button_answB->isHidden()) ui->button_answB->show();
    if (ui->button_answC->isHidden()) ui->button_answC->show();
    if (ui->button_answD->isHidden()) ui->button_answD->show();

    if (actualQuestion == 0) {
        //ui->labelQ->setText("Naciśnij przycisk, aby rozpocząć grę");
        ui->button_next->setText("Rozpocznij grę!");
        makeSelectAnswer();
    }
    else {
        selectedAnswer = 'N';
        makeSelectAnswer();
        ui->labelQ->setText(quest.question);
        ui->button_next->setText("Zatwierdź odpowiedź");
        ui->button_answA->setText("A: " + quest.A);
        ui->button_answB->setText("B: " + quest.B);
        ui->button_answC->setText("C: " + quest.C);
        ui->button_answD->setText("D: " + quest.D);
        ui->listWidget->setCurrentRow(15 - actualQuestion,QItemSelectionModel::SelectCurrent); //zaznaczenie aktualnego pytania na liście
    }
    answerIsChoosen = false;

}



void QuizShow::showCongratulation()
{
    QString info = "Gratulacje! Wygrałeś ";

    ui->labelQ->setText(info);
}


QuizShow::~QuizShow()
{
    delete ui;
}

//==================Private==================
//podaje akutalną wygraną
QString QuizShow::winsAmount()
{
    int row = ui->listWidget->currentRow();
    if (row < 15 && row > -1 ) {
        QListWidgetItem* item = ui->listWidget->item(row);
        QString tmp = item->text();
        return tmp.right(tmp.length()-4).trimmed();
    }
    else {
        return "0";
    }
}


//================= Testy ====================

/*void QuizShow::test()
{
    QString tmp;
    tmp += "Rozmiar vektora: ";
    tmp += QString::number(questions.questLists.size());
    tmp +=  "\nRozmiary list z pytaniami: ";
    for (int i = 0; i < 5; i++) {
        tmp += "  ";
        tmp += QString::number(questions.questLists[i].length());
    }
    tmp += questions.test(3);

    ui->label_test->setText(tmp);
}
*/

