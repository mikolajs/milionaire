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
private:


};

#endif // QUESTIONSHOW_H
