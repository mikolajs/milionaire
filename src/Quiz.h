#ifndef QUIZ_H
#define QUIZ_H













#include <string>
#include "quest.h"
















/**
 * Namespace
 */
/**
 * Class Quiz
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
class Quiz {
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
    Test ( ) { }
    /**
     * Accessor Methods
     */
    /**
     * 
     */
    list<Quest> get_questList ( ) {
        return questList;
    }
    /**
     * 
     */
    void set_questList (list<Quest> value ) {
        questList = value;
    }
    /**
     * Operations
     */
    /**
     * 
     */
    Quest getNextQuest () {
        
    }
    /**
     * 
     */
    list<Quest> returnRest () {
        
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
     list<Quest> questList;
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
#endif //QUIZ_H

