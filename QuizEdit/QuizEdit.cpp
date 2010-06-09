#include <QFileDialog>

#include "QuizEdit.h"
#include "ui_QuizEdit.h"
#include "../Questions/Questions.h"
#include "../Questions/Quest.h"
#include "questeditor.h"

QuizEdit::QuizEdit(QWidget *parent) : QWidget(parent), ui(new Ui::QuizEdit)
{
    ui->setupUi(this);
    connect(ui->pbutton_dodaj, SIGNAL(clicked()), this, SLOT(Window_NowePytania()));
    connect(ui->pbutton_nowyTest, SIGNAL(clicked()), this, SLOT(Window_NowyTest()));
    connect(ui->pbutton_wczytaj, SIGNAL(clicked()), this, SLOT(LoadTestFile()));
    connect(ui->pbutton_zapiszJako, SIGNAL(clicked()), this, SLOT(SaveTestFileNew()));
    connect(ui->pbutton_zapisz, SIGNAL(clicked()), this, SLOT(SaveTestFileOld()));

    m_questions = new Questions();

    OdswiezWidok();
}

QuizEdit::~QuizEdit()
{
    delete ui;
    if(m_questions)
        delete m_questions;
}

void QuizEdit::OdswiezWidok()
{
    if(!m_questions || m_questions->questLists.empty())
    {
        ui->pbutton_edytuj->setEnabled(false);
        ui->pbutton_usun->setEnabled(false);
        ui->pbutton_dodaj->setEnabled(false);
        ui->pbutton_zapisz->setEnabled(false);
        ui->pbutton_zapiszJako->setEnabled(false);
        ui->listWidget->setEnabled(false);
        return;
    }



    ui->pbutton_edytuj->setEnabled(true);
    ui->pbutton_usun->setEnabled(true);

    ui->pbutton_dodaj->setEnabled(true);
    ui->pbutton_zapisz->setEnabled(true);
    ui->pbutton_zapiszJako->setEnabled(true);
    ui->listWidget->setEnabled(true);

    /*for(int i=0; i<MAX_QUEST_LIST; ++i)
    {
        QList<Quest>& lista = m_questions->questLists[i];
        QList<Quest>::iterator itr = lista.begin();
        while(itr != lista.end())
        {
            QListWidgetItem* newitem = new QListWidgetItem((*itr).question);
            ui->listWidget->addItem(newitem);;
            delete newitem;
            ++itr;
        }
    }*/
    return;
}

bool QuizEdit::LoadTest(QString filename)
{
    m_questions->set_filename(filename);
    if(m_questions->loadFile())
    {
        OdswiezWidok();
        return true;
    }

    return false;
}

bool QuizEdit::SaveTest(QString filename)
{
    m_questions->set_filename(filename);
    return m_questions->saveFile();
}


///* SLOTS *///
void QuizEdit::Window_NowePytania()
{
    Quest pytanie("pytanie", "odpowiedz A", "odpowiedz B", "odpowiedz C", "odpowiedz D", 'A', 1);
    m_questions->addQuest(pytanie); // !RUNTIME ERROR!
    QuestEditor* qedit = new QuestEditor(0, true, pytanie);
    qedit->show();
    connect(qedit, SIGNAL(destroyed()), this, SLOT(Odswiez()));
}

void QuizEdit::Window_NowyTest()
{
    //TODO: dialog do wpisania nazwy
    m_questions = new Questions();
    OdswiezWidok();
}

void QuizEdit::Window_EdytujPytania(Quest& pytania)
{
    QuestEditor* qedit = new QuestEditor(this, false, pytania);
    qedit->show();
    connect(qedit, SIGNAL(destroyed()), this, SLOT(Odswiez()));
}


void QuizEdit::Odswiez()
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
                QList<Quest>& nowalista = m_questions->questLists[j];
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

    OdswiezWidok();
}


void QuizEdit::LoadTestFile()
{
    QString file = QFileDialog::getOpenFileName(this, tr("Wszytaj istniejacy test"), "", tr("Xml files (*.xml);;All Files (*)"));
    if(!LoadTest(file))
        qDebug() << "Nie mozna wczytac pliku! QuizEdit::LoadTestFile::LoadFile";
    else
        Odswiez();
}

void QuizEdit::SaveTestFileNew()
{
    QString file = QFileDialog::getOpenFileName(this, tr("Zapisz test jako nowy plik"), "", tr("Xml files (*.xml);;All Files (*)"));
    if(!SaveTest(file))
        qDebug() << "Nie mozna zapis pliku! QuizEdit::SaveTestFile::SaveTest";
}

void QuizEdit::SaveTestFileOld()
{
    if(m_questions->get_filename().isEmpty())
        return SaveTestFileNew();

    bool b = m_questions->saveFile();

    Q_ASSERT(b);

    return;
}
