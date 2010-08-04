#include "QuestionShow.h"
#include <cstdlib>
#include <ctime>

QuestionShow::QuestionShow()
{

    std::srand(std::time(NULL));

    //sprawdź możliwość wykonania pełnej gry

    //rozpocznij grę lub wyświetl komunikat o błędzie


}

Quest QuestionShow::getQuest(int level)
{
    Q_ASSERT(level < 6 && level > 0);
    int randNum = getRand(questLists[level -1].length());
    Q_ASSERT(questLists[level-1].length() > randNum); //random ma dać mniejszą liczbę niż rozmiar listy
    return questLists[level-1].takeAt(randNum); //kasuje zwracany Quest z listy
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

    return int(double(range) * (double(std::rand()) /double( RAND_MAX) )) ;
}

//////////////////////////////// private ///////////////

void QuestionShow::makeQuestListContener()
{

    for (int i = 1; i <= MAX_QUEST_LIST; i++) {
        QList<Quest> tempList;
        for (QVector<Quest>::iterator it = questVector.begin(); it != questVector.end(); ++it) {
            if ((*it).level == i) {
                tempList.append(*it);
            }
        }
        questLists.append(tempList);
    }
   questVector.clear(); //nie wiadomo czy bezpieczne!
}


QString QuestionShow::test(int size)
{
    QString tmp = "\nLiczby losowe dla rozmiaru listy ";
    tmp += QString::number(size);
    tmp += ": ";

    for (int i = 0; i < 10; i++){
        tmp += QString::number(getRand(size));
        tmp += ", ";
    }
    return tmp;
}

