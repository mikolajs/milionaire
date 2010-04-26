#include "QuizShow.h"
#include "ui_QuizShow.h"

QuizShow::QuizShow(QWidget *parent)
    : QWidget(parent), ui(new Ui::QuizShow)
{
    ui->setupUi(this);
}

QuizShow::~QuizShow()
{
    delete ui;
}
