#ifndef QUESTE_H
#define QUESTE_H

#include <QString>

class QuestE
{
public:
    QuestE() {}
    QuestE(QString pytanie, QString a, QString b, QString c, QString d, QChar poprawna, int poziom);
    QString question;

    QString A;
    QString B;
    QString C;
    QString D;

    QChar correct;
    int level;

    bool valid();

};
#endif //QUESTE_H
