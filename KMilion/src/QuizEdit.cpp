/*
    Quiz KMilion program
    Copyright (C) 2010  Mikołaj Sochacki

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/


#include <QtGui/QFileDialog>
#include <QtGui/QMessageBox>
#include <QtCore/QStringList>

#include "QuizEdit.h"
#include "ui_QuizEdit.h"
#include "Questions.h"
#include "Quest.h"

#include <KDE/KLocale>


QuizEdit::QuizEdit(QWidget *parent) : QWidget(parent), ui(new Ui::QuizEdit)
{
  
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    m_questions = 0; //zeruje wskaźnik
    ui->setupUi(this);
    //connect(ui->pbutton_wczytaj, SIGNAL(clicked()), this, SLOT(loadTestFile()));
    //connect(ui->pbutton_nowyTest, SIGNAL(clicked()), this, SLOT(createTestFileNew()));
    //connect(ui->pbutton_zapiszJako, SIGNAL(clicked()), this, SLOT(saveTestFileNew()));
    //connect(ui->pbutton_zapisz, SIGNAL(clicked()), this, SLOT(saveTestFileOld()));
    connect(ui->pushButton_next, SIGNAL(clicked()), this, SLOT(nextQuest()));
    connect(ui->pushButton_previous, SIGNAL(clicked()), this, SLOT(previousQuest()));
    connect(ui->pbutton_dodaj, SIGNAL(clicked()), this, SLOT(addNewQuest()));
    connect(ui->pbutton_edytuj, SIGNAL(clicked()), this, SLOT(alterQuest()));
    connect(ui->pbutton_usun, SIGNAL(clicked()), this, SLOT(deleteQuest()));
    connect(ui->listWidget, SIGNAL(currentRowChanged(int)), this, SLOT(questClicked(int)));
    m_questions = 0;
    saved = true; //flaga zapisu

    filePath = QDir::homePath() + "/.config/kmilion";
}

QuizEdit::~QuizEdit()
{
    delete ui;
    if(m_questions)
        delete m_questions;
}

QString QuizEdit::getPath()
{
    return ui->lineEdit->text();
}

//>>>>>>>>>>>>>>>>>> sloty >>>>>>>>>>>>>>>>>>>>>>>>>>>>

//tworzy nowy test w pliku i ładuje jego widok
void QuizEdit::createTestFileNew()
{

    if (!saved) {
        if ( QMessageBox::question(this,i18n("Unsaved file"),i18n("Unsaved file! \n Do you want to save old file first?"),QMessageBox::Ok, QMessageBox::Cancel) == QMessageBox::Ok) saveTestFileOld();
    }

    QString p  = QFileDialog::getOpenFileName (this, i18n("Create new file"),filePath, tr("Xml files (*.xml);;All Files (*)"));
    if (p.isEmpty()) return; //nie wybrano nazwy
    ui->lineEdit->setText(p);
    ui->listWidget->clear();
    ui->textEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_A->clear();
    ui->lineEdit_B->clear();
    ui->lineEdit_C->clear();
    ui->lineEdit_D->clear();
    if (m_questions) {
        m_questions->clear();
        refreshView();
    } else {
        m_questions = new Questions();
        m_questions->set_filename(ui->lineEdit->text());
    }
}

// ładuje istniejący test
void QuizEdit::loadTestFile()
{
    if (!saved) {
        if ( QMessageBox::question(this,i18n("Unsaved file"),i18n("Unsaved file! \n Do you want to save old file first?"),QMessageBox::Ok, QMessageBox::Cancel) == QMessageBox::Ok) saveTestFileOld();
    }

    QString p = QFileDialog::getOpenFileName(this, i18n("Open existed quiz file"),filePath, tr("Xml files (*.xml);;All Files (*)"));
    if (!p.isEmpty()) ui->lineEdit->setText(p);

    qDebug() << ("ścieżka ładowania starego: " + ui->lineEdit->text());
    if(!loadQuiz()) {
        qDebug() << "Nie mozna wczytac pliku! QuizEdit::LoadTestFile::LoadFile";
        QMessageBox::warning(this,i18n("Load failed!"),tr("Load quiz file failed"),QMessageBox::Ok);
    }


}

//zapisuje jako ...
void QuizEdit::saveTestFileNew()
{
    QString p = QFileDialog::getSaveFileName(this, i18n("Save quiz as a new file"), filePath, tr("Xml files (*.xml);;All Files (*)"));
    if (!p.isEmpty()) ui->lineEdit->setText(p);
    if(!saveQuiz()) {
        qDebug() << "Nie mozna zapis pliku! QuizEdit::SaveTestFile::SaveTest";
        QMessageBox::warning(this,i18n("Save failed!"),tr("Save file failed"),QMessageBox::Ok);
    } else { saved = true; }

}

//zapis akutalnego testu
void QuizEdit::saveTestFileOld()
{
    if(!saveQuiz()) {
        qDebug() << "Nie mozna zapis pliku! QuizEdit::SaveTestFile::SaveTest";
        QMessageBox::warning(this,i18n("Save failed!"),tr("Save file failed"),QMessageBox::Ok);
    } else { saved = true;}
}


//wyświetl następne pytanie
void QuizEdit::nextQuest()
{


    if (m_questions) {
        int row = ui->listWidget->currentRow();
        if (row < m_questions->questVector.size() -1 && row > -1) {
            row++;
            ui->listWidget->setCurrentRow(row);
            //showQuest();
        }
    }
}

//wyświetl poprzednie pytanie
void QuizEdit::previousQuest()
{
    if (m_questions) {
        int row = ui->listWidget->currentRow();
        if (row > 0 && row < m_questions->questVector.size() ) {
            row--;
            ui->listWidget->setCurrentRow(row);
            //showQuest();
        }
    }
}

//dodaje nowe pytanie
void QuizEdit::addNewQuest()
{
    if (!m_questions) return; //brak danych

    Quest q;
    q.correct = ui->comboBox_2->currentText()[0];
    q.level = ui->comboBox->currentText().toInt();
    q.question = ui->textEdit->document()->toPlainText();
    q.A = ui->lineEdit_A->text();
    q.B = ui->lineEdit_B->text();
    q.C = ui->lineEdit_C->text();
    q.D = ui->lineEdit_D->text();
    if (q.valid()) {
        m_questions->addQuest(q);
        refreshView();
        saved = false;
    }
    else {
        QMessageBox::warning(this,i18n("Error!"),i18n("Not valid data!"),QMessageBox::Ok);
    }
}

//zmienia istniejące pytanie --niezabezpieczone błędy danych
void QuizEdit::alterQuest()
{
    if (!m_questions) return; //brak danych

    if (ui->listWidget->count() < 1) {
        addNewQuest();
        return;
    }
    int row = ui->listWidget->currentRow();
    if (row < 0 || (row > m_questions->questVector.size() - 1)) {
        qDebug() << "Niewybrane pytanie w QuizEdit::alterQuest";
        return;
    }
    Quest& q = m_questions->questVector[row];
    q.correct = ui->comboBox_2->currentText()[0];
    q.level = ui->comboBox->currentText().toInt();
    q.question = ui->textEdit->document()->toPlainText();
    q.A = ui->lineEdit_A->text();
    q.B = ui->lineEdit_B->text();
    q.C = ui->lineEdit_C->text();
    q.D = ui->lineEdit_D->text();
    refreshView();
    saved = false;
}

//usuwa wybrany test
void QuizEdit::deleteQuest()
{
    if (!m_questions) return; //brak danych

    int row = ui->listWidget->currentRow();

    if (m_questions && row > -1 && row < m_questions->questVector.size() ) {
        m_questions->questVector.remove(row);
        refreshView();
        saved = false;
    }

}

//wybiera test po kliknięciu go na liście
void QuizEdit::questClicked(int row)
{
    if (row > -1) showQuest(row);
}

/////////private ////////////////
//wczytanie z pliku
bool QuizEdit::loadQuiz()
{
    if(m_questions) delete m_questions;
    m_questions = new Questions();
    m_questions->set_filename(ui->lineEdit->text());
    if(m_questions->loadFile()) {
        refreshView();
        ui->listWidget->setCurrentRow(0);
        if (m_questions->questVector.size() > 0) showQuest(0);
        ui->lineEdit_2->setText(m_questions->get_description());
        return true;
    }
    else return false;
}

//ustawia widok w liście
void QuizEdit::refreshView()
{

    if (!m_questions) return; //brak danych
    //wyświetlanie listy
    QStringList strList;
    for (QVector<Quest>::iterator it = m_questions->questVector.begin(); it != m_questions->questVector.end(); ++it){
        strList.append(QString::number((*it).level) + " - " + (*it).question.left(50));
    }
    int tempRow = ui->listWidget->currentRow(); //backup
    ui->listWidget->clear();
    ui->listWidget->addItems(strList);

    ui->listWidget->setCurrentRow(tempRow);
            //ile jest w poziomach pytań
    QVector<int> vect;
    vect = m_questions->countQuestionInLevels();
    ui->lineEdit_3->setText(QString::number(vect[0]));
    ui->lineEdit_5->setText(QString::number(vect[1]));
    ui->lineEdit_6->setText(QString::number(vect[2]));
    ui->lineEdit_7->setText(QString::number(vect[3]));
    ui->lineEdit_8->setText(QString::number(vect[4]));
    if (ui->listWidget->count() > 0 && ui->listWidget->currentRow() == -1 ) ui->listWidget->setCurrentRow(0);


}



//zapis do pliku
bool QuizEdit::saveQuiz()
{ 
    if (!m_questions) return false; //brak danych
    if (ui->lineEdit->text().isEmpty()) return false;
    m_questions->set_filename(ui->lineEdit->text());
    m_questions->set_description(ui->lineEdit_2->text());
    return m_questions->saveFile();
}

//wyświetlanie zaznaczonego aktualnie pytania
void QuizEdit::showQuest(int row)
{
    if (row < 0 || row >= m_questions->questVector.size()) {
        qDebug() << "Nieprawidłowa wartość row w QuizEdit::showQuest";
        return; //zabezpieczenie
    }
    Quest& q = m_questions->questVector[row];
    ui->textEdit->setText(q.question);
    ui->lineEdit_A->setText(q.A);
    ui->lineEdit_B->setText(q.B);
    ui->lineEdit_C->setText(q.C);
    ui->lineEdit_D->setText(q.D);
    ui->comboBox->setCurrentIndex(q.level - 1);
    int index_correct = -1;
    switch (q.correct.toAscii()) {
    case 'A':
        index_correct = 0;
        break;
    case 'B':
        index_correct = 1;
        break;
    case 'C':
        index_correct = 2;
        break;
    case 'D':
        index_correct = 3;
        break;
    default:
        qDebug() << "Niemożliwa wartość prawidłowej odpowiedzi!";
    }
    ui->comboBox_2->setCurrentIndex(index_correct);

}

///////////testowe //////////////

void QuizEdit::printRow() {
    qDebug() << "current row: ";
    qDebug() << ui->listWidget->currentRow();
}

