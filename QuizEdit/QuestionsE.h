#ifndef QUESTIONSE_H
#define QUESTIONSE_H

#include "QuestE.h"
#include <QtCore>

#define MAX_QUEST_LIST 5

class QXmlStreamReader;
class QXmlStreamWriter;

class QuestionsE
{

public:
    QuestionsE();
    QuestionsE(QString opis, QString nazwa);

    QVector<QuestE> questVector;
    QString get_filename() const { return filename; }
    QString get_description() const { return description; }
    void set_description(QString value) { description = value; }
    void set_filename(QString value) { filename = value; }
    /** podaje tablicę wymiaru MAX_QUEST_LIST z ilością pytań w kolejnych poziomach (index + 1)*/
    QVector<int> countQuestionInLevels();
    /** podaje ilość pytań w vektorze*/
    int getSize() { return questVector.size(); }

    void addQuest(QuestE& quest);
    /** ładuje dane z pliku (wcześniej należy ustawić nazwę pliku set_filename()) */
    bool loadFile();
    /** zapisuje dane do aktualnego pliku (według nazwy filename) */
    bool saveFile();

    //metoda tylko do testów
    void test();
    //czyści dane
    void clear();

private:
    QString description;
    QString filename;

    void resetData();

    //odczytuje pojedyncze pytanie ze strumienia i dodaje do odpowiedniej listy
    void readQuestion(QXmlStreamReader& load);

    //pomocnicza do przeniesienia
    QVector<QuestE> makeQuiz();
    //tworzenie testowego pliku
    void createXMLforTest() ;
    //drukuje na stdout zawartość list z Quizami
    void printContent();
    //string z pytaniem
    QString questToString(QuestE& q);
    //tymczasowa metoda testująca poprawność wczytywania XML
    void tempReader();

};
#endif //QUESTIONSE_H

