#ifndef QUESTIONS_H
#define QUESTIONS_H


















#include <string>
#include "quest.h"
#include "qstring.h"















/**
 * Namespace
 */
/**
 * Class Questions
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
class Questions {
/**
 * Public stuff
 */
public:
    /**
     * Fields
     */
     QList<Quest> questList1;
     QList<Quest> questList2;
     QList<Quest> questList3;
     QList<Quest> questList4;
     QList<Quest> questList5;
    /**
     * 
     */
    /**
     * Constructors
     */
    /**
     * Empty Constructor
     */
    Questions ( ) { }
    /**
     * Accessor Methods
     */
    /**
     * 
     */
    QList<Quest> get_questList1 ( ) {
        return questList1;
    }
    /**
     * 
     */
    void set_questList1 (QList<Quest> value ) {
        questList1 = value;
    }
    /**
     * 
     */
    QList<Quest> get_questList2 ( ) {
        return questList2;
    }
    /**
     * 
     */
    void set_questList2 (QList<Quest> value ) {
        questList2 = value;
    }
    /**
     * 
     */
    QList<Quest> get_questList3 ( ) {
        return questList3;
    }
    /**
     * 
     */
    void set_questList3 (QList<Quest> value ) {
        questList3 = value;
    }
    /**
     * 
     */
    QList<Quest> get_questList4 ( ) {
        return questList4;
    }
    /**
     * 
     */
    void set_questList4 (QList<Quest> value ) {
        questList4 = value;
    }
    /**
     * 
     */
    QList<Quest> get_questList5 ( ) {
        return questList5;
    }
    /**
     * 
     */
    void set_questList5 (QList<Quest> value ) {
        questList5 = value;
    }
    /**
     * 
     */
    QString get_description ( ) {
        return description;
    }
    /**
     * 
     */
    void set_description (QString value ) {
        description = value;
    }
    /**
     * 
     */
    QString get_filename ( ) {
        return filename;
    }
    /**
     * 
     */
    void set_filename (QString value ) {
        filename = value;
    }
    /**
     * Operations
     */
    /**
     * 
     */
    list<Quest> makeTest () {
        
    }
    /**
     * 
     */
    void recycling (list<Quest> rest) {
        
    }
    /**
     * 
     */
    void addQuest (Quest quest) {
        
    }
    /**
     * 
     */
    bool loadFile (string file) {
        
    }
    /**
     * 
     */
    bool saveFile () {
        
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
     QString description;
     QString filename;
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
#endif //QUESTIONS_H

