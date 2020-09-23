/****************************************************
Name:Josue Zamitiz-Ayala
Date:5-5-19
Assignment Number: 6
Hours spent	working	on the project: 4
Instructor:	Seals
*****************************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include "CharStack.h"

using namespace std;

bool truePair(char, char);


int main() {

    CharStack stack;

    vector <string> equations;

    ifstream fin;
    fin.open("input.txt");

    ofstream fout;
    fout.open("output.txt");

    string equation_check, newEquation;
    char c;

    while( getline(fin, newEquation)){

        equations.push_back(newEquation);
    }

    for( int i = 0; i < equations.size(); i++) {

        equation_check = equations[i];

        for (int j = 0; j < strlen(equation_check.c_str()); j++) {

            c = equation_check[j];

            if (c == '(' || c == '[') {

                stack.push(c);

            } else if (c == ')' || c == ']') {

                if ( truePair(stack.top_of_stack(), c)) {
                    stack.pop();
                }
            }
        }

        if (stack.isEmpty()) {
            fout << equation_check << "  VALID" << endl;
        } else{
            fout << equation_check << "  INVALID" << endl;
        }

        while(!stack.isEmpty()){
            stack.pop();
        }
    }

    fin.close();
    fout.close();

    cout << "\n**Results are printed onto file called 'output.txt'.** " << endl;

    return 0;
}

bool truePair(char open, char close){

    if(open == '(' && close == ')')
        return true;
    else if(open == '[' && close == ']')
        return true;

    return false;
}
