#include "questeditor.h"
#include "ui_questeditor.h"
#include "../Questions/Questions.h"
#include "../Questions/Quest.h"

QuestEditor::QuestEditor(QWidget *parent, bool nowe, Quest& pytanie) : QWidget(parent), ui(new Ui::QuestEditor), m_pytanie(pytanie), m_nowe(nowe)
{
    ui->setupUi(this);

    if(!m_nowe)
    {
        if(!pytanie.valid())
            qDebug() << "Pytanie niepoprawne! QuestEditor::QuestEditor";
        else
        {
            ui->tresc->setText(m_pytanie.question);
            ui->odpA->setText(m_pytanie.A);
            ui->odpB->setText(m_pytanie.B);
            ui->odpC->setText(m_pytanie.C);
            ui->odpD->setText(m_pytanie.D);
            ui->poziom->setCurrentIndex(m_pytanie.level);
            ui->poprawna->setCurrentIndex(PobierzIndex(m_pytanie.correct));
        }
    }

    connect(ui->pbutton_Anuluj, SIGNAL(clicked()), this, SLOT(Wyjdz()));
    connect(ui->pbutton_OK, SIGNAL(clicked()), this, SLOT(ZatwierdzZmiany()));
}

QuestEditor::~QuestEditor()
{
    delete ui;
}

void QuestEditor::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}


///* FUNKCJE *///
int QuestEditor::PobierzIndex(QChar odp)
{
    if(odp == 'a' || odp == 'A')
        return 1;
    if(odp == 'b' || odp == 'B')
        return 2;
    if(odp == 'c' || odp == 'C')
        return 3;
    if(odp == 'd' || odp == 'D')
        return 4;

    qDebug() << "Poprawna odpowiedz, podana jako parametr funkcji 'PobierzIndex', ma niewlasciwa wartosci! QuestEditor::PobierzIndex";
    return 1;
}


///* SLOTY *///
void QuestEditor::ZatwierdzZmiany()
{
    if(!m_pytanie.valid())
        return;

    if(m_pytanie.question != ui->tresc->toPlainText())
        m_pytanie.question = ui->tresc->toPlainText();

    if(m_pytanie.A != ui->odpA->text())
        m_pytanie.A = ui->odpA->text();
    if(m_pytanie.B != ui->odpB->text())
        m_pytanie.B = ui->odpB->text();
    if(m_pytanie.C != ui->odpC->text())
        m_pytanie.C = ui->odpC->text();
    if(m_pytanie.D != ui->odpD->text())
        m_pytanie.D = ui->odpD->text();

    if(m_pytanie.level != ui->poziom->currentIndex())
        m_pytanie.level = ui->poprawna->currentIndex();
    if(m_pytanie.correct != *ui->poprawna->currentText().begin())
        m_pytanie.correct = *ui->poprawna->currentText().begin();

    this->close();
}

void QuestEditor::Wyjdz()
{
    if(!m_nowe)
        this->close();

    this->close();
}
