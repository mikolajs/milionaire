#include "QuizShow.h"
#include "ui_QuizShow.h"

QuizShow::QuizShow(QString path, QWidget *parent)
    : QWidget(parent), ui(new Ui::QuizShow)
{

    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    ui->setupUi(this);

    selectedAnswer = 'N';
    actualQuestion = 0;
    //ładuje pytania z pliku
    questions.set_filename(path);
    questions.loadFile();

    connect(ui->button_answA,SIGNAL(clicked()),this,SLOT(selectAnswerA()));
    connect(ui->button_answB,SIGNAL(clicked()),this,SLOT(selectAnswerB()));
    connect(ui->button_answC,SIGNAL(clicked()),this,SLOT(selectAnswerC()));
    connect(ui->button_answD,SIGNAL(clicked()),this,SLOT(selectAnswerD()));
    connect(ui->button_next,SIGNAL(clicked()),this,SLOT(nextQuestion()));
    connect(ui->button_resign,SIGNAL(clicked()),this,SLOT(resignAction()));
    connect(ui->button_public,SIGNAL(clicked()),this,SLOT(publicAction()));
    connect(ui->button_fifty_fifty,SIGNAL(clicked()),this,SLOT(fifty_fiftyAction()));
    connect(ui->button_phone,SIGNAL(clicked()),this,SLOT(phoneAction()));

    test();
}

void QuizShow::selectAnswerA()
{
    selectedAnswer = 'A';
    makeSelectAnswer();
}

void QuizShow::selectAnswerB()
{
    selectedAnswer = 'B';
    makeSelectAnswer();
}

void QuizShow::selectAnswerC()
{
    selectedAnswer = 'C';
    makeSelectAnswer();
}

void QuizShow::selectAnswerD()
{
    selectedAnswer = 'D';
    makeSelectAnswer();
}

void QuizShow::resignAction()
{
    //dodać obsługę wartości gwarantowanej!!!
    if (actualQuestion > 0) {
        int row = ui->listWidget->currentRow();
        if (row < 15) {
            row++;
            QListWidgetItem* item = ui->listWidget->item(row);
            QString wonSumString = item->text().right(4).trimmed();
            ui->labelQ->setText("Koniec gry! \n Gratuluje wygrałeś " + wonSumString + "!");
        }
        else {
            ui->labelQ->setText("Niestety nie wygrałeś!");
        }
        actualQuestion = 0;
        showQuestion();
    }
}

void QuizShow::fifty_fiftyAction()
{
    int notProper[2];
    int i = 0;
    int random;
    //pobieram prawidłową odpowiedź 65 to wartość A w ascii
    int correct = int(quest.correct.toAscii()) - 65;
    Q_ASSERT(correct >= 0 || correct <= 3);

    while( i < 2) {
       random = questions.getRand(4);
       if (random != correct) {
           notProper[i] = random;
           i++;
       }
    }
    
    for (int j = 0; j < 2; j++) {
        switch (notProper[j]) {
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
    }
    //wyłączenie
    ui->button_fifty_fifty->hide();

}

void QuizShow::publicAction()
{
    //pomoc publiczności
}

void QuizShow::phoneAction()
{
    //telefon do przyjaciela
}

void QuizShow::makeSelectAnswer()
{
    //podmieniania obrazków pod button_answX
    ui->button_answA->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,128);color:white;"));
    ui->button_answB->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,128);color:white;"));
    ui->button_answC->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,128);color:white;"));
    ui->button_answD->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,128);color:white;"));
    switch (selectedAnswer.toAscii()) {
    case 'A':
        ui->button_answA->setStyleSheet(QString::fromUtf8("background-color: rgb(20,128,128);color:white;"));
        break;
    case 'B':
        ui->button_answB->setStyleSheet(QString::fromUtf8("background-color: rgb(20,128,128);color:white;"));
        break;
    case 'C':
        ui->button_answC->setStyleSheet(QString::fromUtf8("background-color: rgb(20,128,128);color:white;"));
        break;
    case 'D':
        ui->button_answD->setStyleSheet(QString::fromUtf8("background-color: rgb(20,128,128);color:white;"));
        break;
    }
}

void QuizShow::nextQuestion()
{
   Q_ASSERT(actualQuestion < 16);

   if (actualQuestion == 0) {
       //przywrócone koła ratunkowe
       if (ui->button_fifty_fifty->isHidden()) ui->button_fifty_fifty->show();
       if (ui->button_phone->isHidden()) ui->button_phone->show();
       if (ui->button_public->isHidden()) ui->button_public->show();

       if (!questions.checkCanPerformQuiz()) {
           ui->labelQ->setText("Za mało pytań, musi być ich \n co najmniej po 3 na każdy z pięciu poziomów! ");
           return;
       }
       else {

           ui->listWidget->setCurrentRow(15,QItemSelectionModel::SelectCurrent);
       }
   }

   if (actualQuestion == 15) {
        resignAction(); //podmienić na inną akcję z wyświetleniem wygranej
        return;
    }
   //sprawdzenie poprawności odpowiedzi
   if (actualQuestion > 0){
       if (quest.correct != selectedAnswer) {
           ui->labelQ->setText("Nieprawidłowa odpowiedź, przegrałeś! Prawidłowa odpowiedź: ");
           selectedAnswer = quest.correct;
           actualQuestion = 0;
           showQuestion();
           return;
       }
   }

    quest = questions.getQuest(1 + actualQuestion / 3);
    actualQuestion++; //powinno być instrukcję wyżej ale nie chce mi się odejmować wyżej 1
    showQuestion();

}


void QuizShow::showQuestion()
{
    //usuwam wybraną odpowiedź

    if (ui->button_answA->isHidden()) ui->button_answA->show();
    if (ui->button_answB->isHidden()) ui->button_answB->show();
    if (ui->button_answC->isHidden()) ui->button_answC->show();
    if (ui->button_answD->isHidden()) ui->button_answD->show();

    if (actualQuestion == 0) {
        //ui->labelQ->setText("Naciśnij przycisk, aby rozpocząć grę");
        ui->button_next->setText("Naciśnij, aby zacząć grę");
        makeSelectAnswer();
    }
    else {
        selectedAnswer = 'N';
        makeSelectAnswer();
        ui->labelQ->setText(quest.question);
        ui->button_next->setText("Zatwierdź odpowiedź");
        ui->button_answA->setText(quest.A);
        ui->button_answB->setText(quest.B);
        ui->button_answC->setText(quest.C);
        ui->button_answD->setText(quest.D);
        ui->listWidget->setCurrentRow(15 - actualQuestion,QItemSelectionModel::SelectCurrent); //zaznaczenie aktualnego pytania na liście
    }

}


QuizShow::~QuizShow()
{
    delete ui;
}

void QuizShow::test()
{
    QString tmp =  "Rozmiary list z pytaniami: ";
    for (int i = 0; i < 5; i++) {
        tmp += "  ";
        tmp += QString::number(questions.questLists[i].length());
    }
    tmp += questions.test(3);

    ui->label_test->setText(tmp);
}


