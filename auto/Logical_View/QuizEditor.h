#ifndef QUIZEDITOR_H
#define QUIZEDITOR_H



















#include <string>
#include "quest.h"
#include "questions.h"















/**
 * Namespace
 */
/**
 * Class QuizEditor
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
 * 
 * 
 * 
 * 
 * 
 */
class QuizEditor {
/**
 * Public stuff
 */
public:
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
     * Empty Constructor
     */
    TestEditor ( ) { }
    /**
     * Accessor Methods
     */
    /**
     * 
     */
    QList<Quest>::iterator get_questIt ( ) {
        return questIt;
    }
    /**
     * 
     */
    void set_questIt (QList<Quest>::iterator value ) {
        questIt = value;
    }
    /**
     * 
     */
    Questions get_questions ( ) {
        return questions;
    }
    /**
     * 
     */
    void set_questions (Questions value ) {
        questions = value;
    }
    /**
     * Operations
     */
    /**
     * 
     */
    void addTest () {
        
    }
    /**
     * 
     */
    void editTest () {
        
    }
    /**
     * 
     */
    bool getNext () {
        
    }
    /**
     * 
     */
    bool getPrevious () {
        
    }
/**
 * Protected stuff
 */
protected:
    /**
     * Fields
     */
     Questions questions;
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
     QList<Quest>::iterator questIt;
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
     * 
     */
    void deleteQuest () {
        
    }
    /**
     * 
     */
    void insertQuest () {
        
    }
};
#endif //QUIZEDITOR_H

