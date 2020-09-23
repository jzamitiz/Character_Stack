/****************************************************
Name:Josue Zamitiz-Ayala
Date:5-5-19
Assignment Number: 6
Hours spent	working	on the project: 4
Instructor:	Seals
*****************************************************/

#ifndef ASSIGNEMENT6_CHARSTACK_H
#define ASSIGNEMENT6_CHARSTACK_H


class CharStack {

private:

    struct StackNode{

        char groupingSymbol;
        StackNode* next;
    };

    StackNode* top;

public:

    CharStack(){
        top = nullptr;
    }

    ~CharStack();

    void push(char);
    void pop();
    char top_of_stack();
    bool isEmpty();

};


#endif //ASSIGNEMENT6_CHARSTACK_H
