#include <QFileDialog>
#include <QMessageBox>

#include "QuizEdit.h"
#include "ui_QuizEdit.h"
#include "../Questions/Questions.h"
#include "../Questions/Quest.h"


QuizEdit::QuizEdit(QWidget *parent) : QWidget(parent), ui(new Ui::QuizEdit)
{
    m_questions = 0; //zeruje wskaźnik
    ui->setupUi(this);
    connect(ui->pbutton_wczytaj, SIGNAL(clicked()), this, SLOT(loadTestFile()));
    connect(ui->pbutton_nowyTest, SIGNAL(clicked()), this, SLOT(createTestFileNew()));
    connect(ui->pbutton_zapiszJako, SIGNAL(clicked()), this, SLOT(saveTestFileNew()));
    connect(ui->pbutton_zapisz, SIGNAL(clicked()), this, SLOT(saveTestFileOld()));
    connect(ui->pushButton_next, SIGNAL(clicked()), this, SLOT(nextQuest()));
    connect(ui->pushButton_previous, SIGNAL(clicked()), this, SLOT(previousQuest()));
    connect(ui->pbutton_dodaj, SIGNAL(clicked()), this, SLOT(addNewQuest()));
    connect(ui->pbutton_edytuj, SIGNAL(clicked()), this, SLOT(alterQuest()));
    connect(ui->pbutton_usun, SIGNAL(clicked()), this, SLOT(deleteQuest()));
    connect(ui->listWidget, SIGNAL(currentRowChanged(int)), this, SLOT(questClicked(int)));

}

QuizEdit::~QuizEdit()
{
    delete ui;
    if(m_questions)
        delete m_questions;
}


//tworzy nowy test w pliku i ładuje jego widok
void QuizEdit::createTestFileNew()
{
    ui->lineEdit->setText(QFileDialog::getOpenFileName(this, tr("Stwórz nowy plik"), "", tr("Xml files (*.xml);;All Files (*)")));
    if(!loadQuiz()) {
        qDebug() << "Nie mozna wczytac pliku! QuizEdit::LoadTestFile::LoadFile";
        QMessageBox::warning(this,tr("Nieudane stworzenie!"),tr("Nie udało się stworzyć nowego pliku"),QMessageBox::Ok);
    }
    else {
        refreshView();
    }
}

// ładuje istniejący test
void QuizEdit::loadTestFile()
{
    ui->lineEdit->setText(QFileDialog::getOpenFileName(this, tr("Wszytaj istniejacy test"), "", tr("Xml files (*.xml);;All Files (*)")));
    qDebug() << ("ścieżka: " + ui->lineEdit->text());
    if(!loadQuiz()) {
        qDebug() << "Nie mozna wczytac pliku! QuizEdit::LoadTestFile::LoadFile";
        QMessageBox::warning(this,tr("Nieudane wczytanie!"),tr("Nie udało się wczytać pliku"),QMessageBox::Ok);
    }

}

//zapisuje jako ...
void QuizEdit::saveTestFileNew()
{
    ui->lineEdit->setText(QFileDialog::getOpenFileName(this, tr("Zapisz test jako nowy plik"), "", tr("Xml files (*.xml);;All Files (*)")));
    if(!saveQuiz())
        qDebug() << "Nie mozna zapis pliku! QuizEdit::SaveTestFile::SaveTest";
    QMessageBox::warning(this,tr("Nieudany zapis pliku!"),tr("Nie udało się zapisać pliku"),QMessageBox::Ok);

}

//zapis akutalnego testu
void QuizEdit::saveTestFileOld()
{
    if(!saveQuiz())
        qDebug() << "Nie mozna zapis pliku! QuizEdit::SaveTestFile::SaveTest";
    QMessageBox::warning(this,tr("Nieudany zapis pliku!"),tr("Nie udało się zapisać pliku"),QMessageBox::Ok);
}

//wyświetl następne pytanie
void QuizEdit::nextQuest()
{
 //ładowanie następnego z listy
}

//wyświetl poprzednie pytanie
void QuizEdit::previousQuest()
{

}

//dodaje nowe pytanie
void QuizEdit::addNewQuest()
{

}

//zmienia istniejące pytanie
void QuizEdit::alterQuest()
{

}

//usuwa wybrany test
void QuizEdit::deleteQuest()
{

}

//wybiera test po kliknięciu go na liście
void QuizEdit::questClicked(int row)
{

}

/////////private ////////////////

bool QuizEdit::loadQuiz()
{
    if(m_questions) delete m_questions;
    m_questions = new Questions();
    m_questions->set_filename(ui->lineEdit->text());
    m_questions->set_description(ui->lineEdit_2->text());
    if(m_questions->loadFile()) {
        refreshView();
        return true;
    }
    else return false;
}

//ustawia widok w liście -----------wymaga poprawy!!!
void QuizEdit::refreshView()
{

    for(int i=0; i<MAX_QUEST_LIST; ++i)
    {
        QList<Quest>& lista = m_questions->questLists[i];
        QList<Quest>::iterator itr = lista.begin();
        while(itr!=lista.end())
        {
            if((*itr).level != i)
            {
                int j = (*itr).level;
                QList<Quest>& nowalista = m_questions->questLists[j-1];
                nowalista.push_back((*itr));
                QList<Quest>::iterator next = itr+1;
                lista.erase(itr);
                itr=next;
            }
            else
            {
                ++itr;
            }
        }//end while
    }//end for
    return;
}




bool QuizEdit::saveQuiz()
{ 
    m_questions->set_filename(ui->lineEdit->text());
    return m_questions->saveFile();
}




