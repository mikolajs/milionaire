#ifndef QUEST_H
#define QUEST_H














#include <string>
#include "qstring.h"
#include "qchar.h"















/**
 * Namespace
 */
/**
 * Class Quest
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */
class Quest {
/**
 * Public stuff
 */
public:
    /**
     * Fields
     */
     QString question;
     QString answerA;
     QString answerB;
     QString answerC;
     QString answerD;
     QChar correct;
    /**
     * 
     */
    /**
     * Constructors
     */
    /**
     * Empty Constructor
     */
    Quest ( ) { }
    /**
     * Accessor Methods
     */
    /**
     * 
     */
    QString get_question ( ) {
        return question;
    }
    /**
     * 
     */
    void set_question (QString value ) {
        question = value;
    }
    /**
     * 
     */
    QString get_answerA ( ) {
        return answerA;
    }
    /**
     * 
     */
    void set_answerA (QString value ) {
        answerA = value;
    }
    /**
     * 
     */
    QString get_answerB ( ) {
        return answerB;
    }
    /**
     * 
     */
    void set_answerB (QString value ) {
        answerB = value;
    }
    /**
     * 
     */
    QString get_answerC ( ) {
        return answerC;
    }
    /**
     * 
     */
    void set_answerC (QString value ) {
        answerC = value;
    }
    /**
     * 
     */
    QString get_answerD ( ) {
        return answerD;
    }
    /**
     * 
     */
    void set_answerD (QString value ) {
        answerD = value;
    }
    /**
     * 
     */
    QChar get_correct ( ) {
        return correct;
    }
    /**
     * 
     */
    void set_correct (QChar value ) {
        correct = value;
    }
    /**
     * Operations
     */
    /**
     * 
     */
    bool valid () {
        
    }
/**
 * Protected stuff
 */
protected:
    /**
     * Fields
     */
    /**
     * 
     */
    /**
     * Constructors
     */
    /**
     * Accessor Methods
     */
    /**
     * Operations
     */
/**
 * Private stuff
 */
private:
    /**
     * Fields
     */
    /**
     * 
     */
    /**
     * Constructors
     */
    /**
     * Accessor Methods
     */
    /**
     * Operations
     */
};
#endif //QUEST_H

