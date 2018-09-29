//
//  main.cpp
//  Simple calculator if-else
//
//  Created by Nate Reynolds on 8/14/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//  The purpose of this program is to build a simple calculator

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    char
        op,
        division = '/',
        multiplication = '*',
        addition = '+',
        subtraction = '-';
    
    double
        input1 = 0.0,
        input2 = 0.0;
    
    cout << "Hello! This is a simple calculator program\n";
    cout << "Please enter a number: ";
    cin >> input1;
    cout << "Thank you! Please enter a symbol for what operation you would like to do eg. / , * , + , - : ";
    cin >> op;
    cout << "Thank you! Please enter a second number: ";
    cin >> input2;
    
    if (op == division) {
        if (input2 == 0) {
            cout << "You cannot divide by zero\n";
        }
        else
            cout << input1/input2 <<endl;
    }
    else if (op == multiplication){
        cout << input1*input2 << endl;
    }
    else if (op == addition){
        cout << input1 + input2 << endl;
    }
    else if (op == subtraction){
        cout << input1 - input2 << endl;
    }
    
    return 0;
}
