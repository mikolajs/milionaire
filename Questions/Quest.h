#ifndef QUEST_H
#define QUEST_H

#include <QString>

class Quest
{
public:
    Quest() {}
    Quest(QString pytanie, QString a, QString b, QString c, QString d, QChar poprawna, int poziom);
    QString question;

    QString A;
    QString B;
    QString C;
    QString D;

    QChar correct;
    int level;

    bool valid();

};
#endif //QUEST_H
