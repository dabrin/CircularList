/* 
 * File:   main.cpp
 * Author: dabri
 *
 * Created on 16 May 2017, 04:26
 */

#include <cstdlib>

#include "CircularList.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    CircularList myCircularList;

    myCircularList.insertintoList('a');
    myCircularList.insertintoList('b');
    myCircularList.insertintoList('h');
    myCircularList.insertintoList('c');
    //    
    myCircularList.printList();

    return 0;
}

