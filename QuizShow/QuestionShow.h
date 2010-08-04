#ifndef QUESTIONSHOW_H
#define QUESTIONSHOW_H

#include "../Questions/Questions.h"

class QuestionShow : public Questions
{
public:
    QuestionShow();
    Quest getQuest(int level);
    bool checkCanPerformQuiz();
    /** dostarcza losową liczbę z zakresu 0-(range -1) ???   */
    int getRand(int range);
    QString test(int size);
    QVector<QList<Quest> > questLists;
    //robię swój konter aby nie przerabiać kodu
     void makeQuestListContener();
private:



};

#endif // QUESTIONSHOW_H
