/****************************************************
Name:Josue Zamitiz-Ayala
Date:5-5-19
Assignment Number: 6
Hours spent	working	on the project: 4
Instructor:	Seals
*****************************************************/

#include "CharStack.h"
#include <iostream>

using namespace std;

CharStack::~CharStack() {
    StackNode* nodePtr = nullptr, *nextNode = nullptr;

    nodePtr = top;
     while (nodePtr){

         nextNode = nodePtr->next;
         delete nodePtr;
         nodePtr = nextNode;
     }
}

void CharStack::push(char symbol) {

    StackNode* newNode = nullptr;
    newNode = new StackNode;
    newNode->groupingSymbol = symbol;

    if (isEmpty()){

        top = newNode;
        newNode->next = nullptr;
    }else{
        newNode->next = top;
        top = newNode;
    }

}

char CharStack::top_of_stack() {
    char symbol;
    symbol = top->groupingSymbol;
    return symbol;
}

void CharStack::pop() {

    StackNode* temp = nullptr;

    if (isEmpty()){
        //cout << "**The Stack is Empty!**" << endl;
    }else{
        temp = top->next;
        delete top;
        top = temp;
    }

    //return symbol;
}

bool CharStack::isEmpty(){

    bool status;

    if(!top){
        status = true;
    }else
        status = false;

    return status;
}