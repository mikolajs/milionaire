#ifndef QUESTIONSHOW_H
#define QUESTIONSHOW_H

#include "../Questions/Questions.h"

class QuestionShow : public Questions
{
public:
    QuestionShow();
    Quest getQuest(int level);
    bool checkCanPerformQuiz();
private:
    //dostarcza losową liczbę z zakresu 0-range
    int getRand(int range);
};

#endif // QUESTIONSHOW_H
