/* 
 * File:   CircularList.cpp
 * Author: dabri
 * 
 * Created on 16 May 2017, 04:28
 */

#include "CircularList.h"
#include "CircularList.h"
#include<iostream>
#include <malloc.h>
#include <stdlib.h>
#include <sstream>
using namespace std;

CircularList::CircularList() {
}

CircularList::CircularList(const CircularList& orig) {
}

CircularList::~CircularList() {
}

void CircularList::insertintoList(char value) {
    LISTNODEPTR newPtr, tempPtr, previousPtr;

    newPtr = (LISTNODEPTR) malloc(sizeof (LISTNODE));
    newPtr->data = value;
    //newPtr->nextPtr = NULL;
    
    //guardar el head 
    
    tempPtr = startNodeList;
    if (startNodeList == NULL) {
        startNodeList = newPtr;
        startNodeList->nextPtr = startNodeList;
        tempPtr=startNodeList;
    } else {
        tempPtr->nextPtr = newPtr;
        newPtr->nextPtr = startNodeList;
        tempPtr = newPtr;
    } 
}

void CircularList::printList() {
    //current node 
    LISTNODEPTR currentNode = startNodeList;

    if (currentNode != NULL) {
        do{
            cout << currentNode-> data << endl;
            currentNode = currentNode->nextPtr;
        } while (currentNode != startNodeList);
        // std::cout<<("NULL\n\n");
    }//end if
    else {
        cout << "The list is empty.\n\n" << endl;
    }
}

