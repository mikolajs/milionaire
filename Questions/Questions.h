#ifndef QUESTIONS_H
#define QUESTIONS_H

#define MAX_QUEST_LIST  5

#include "Quest.h"
#include <QtCore>
class QXmlStreamReader;
class QXmlStreamWriter;

class Questions
{

public:
    Questions();
    Questions(QString opis, QString nazwa);

    QVector<QList<Quest> > questLists;

    QString get_filename() const { return filename; }
    QString get_description() const { return description; }
    void set_description(QString value) { description = value; }
    void set_filename(QString value) { filename = value; }




    void addQuest(Quest quest);
    /** ładuje dane z pliku (wcześniej należy ustawić nazwę pliku set_filename()) */
    bool loadFile();
    /** zapisuje dane do aktualnego pliku (według nazwy filename) */
    bool saveFile();

    //metoda tylko do testów
    void test();


private:
    QString description;
    QString filename;

    void ResetData();

    //zapisuje daną listę do strumienia XML
    void writeQuestList(QList<Quest>& questList, QXmlStreamWriter& save); ///poprawić sygnaturę!!!
    //odczytuje pojedyncze pytanie ze strumienia i dodaje do odpowiedniej listy
    void readQuestion(QXmlStreamReader& load);

    //pomocnicza do przeniesienia
    QList<Quest> makeQuiz();
    //tworzenie testowego pliku
    void createXMLforTest() ;
    //drukuje na stdout zawartość list z Quizami
    void printContent();
    //string z pytaniem
    QString questToString(Quest& q);
    //tymczasowa metoda testująca poprawność wczytywania XML
    void tempReader();

};
#endif //QUESTIONS_H

