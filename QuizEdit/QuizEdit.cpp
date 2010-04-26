#include "QuizEdit.h"
#include "ui_QuizEdit.h"

QuizEdit::QuizEdit(QWidget *parent)
    : QWidget(parent), ui(new Ui::QuizEdit)
{
    ui->setupUi(this);
}

QuizEdit::~QuizEdit()
{
    delete ui;
}
