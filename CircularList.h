/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CircularList.h
 * Author: dabri
 *
 * Created on 16 May 2017, 04:28
 */

#ifndef CIRCULARLIST_H
#define CIRCULARLIST_H

class CircularList {
public:
    CircularList();
    CircularList(const CircularList& orig);
    void insertintoList(char value);
    void printList();
    virtual ~CircularList();
private:
    
    struct listNode{
        char data;
        struct listNode *nextPtr;
    };
    /*variables*/
    typedef struct listNode LISTNODE;
    typedef LISTNODE *LISTNODEPTR;

    LISTNODEPTR startNodeList;
};

#endif /* CIRCULARLIST_H */

