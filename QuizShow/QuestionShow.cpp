#include "QuestionShow.h"
#include <cstdlib>
#include <ctime>

QuestionShow::QuestionShow()
{
//set fullscreen

    //sprawdź możliwość wykonania pełnej gry

    //rozpocznij grę lub wyświetl komunikat o błędzie


}

Quest QuestionShow::getQuest(int level)
{
    Q_ASSERT(level < 6 && level > 0);
    int randNum = getRand(questLists[level -1].length());
    Q_ASSERT(questLists[level].length() < randNum); //random ma dać mniejszą liczbę niż rozmiar listy
    return questLists[level].takeAt(randNum); //kasuje zwracany Quest z listy
}

bool QuestionShow::checkCanPerformQuiz()
{
    for (QVector<QList<Quest> >::iterator it = questLists.begin(); it != questLists.end(); ++it) {
    if ((*it).length() < 3) return false;
    }
    return true;
}

int QuestionShow::getRand(int range)
{
    std::srand(std::time(NULL));
    return int(double(range) * (double(std::rand()) / RAND_MAX)) ;
}
