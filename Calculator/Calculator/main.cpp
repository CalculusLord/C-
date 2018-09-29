//
//  main.cpp
//  Calculator
//
//  Created by Nate Reynolds on 8/12/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//

#include <iostream>

using namespace std;

int addition (int x, int y);
int multiplication (int x, int y);
int division (int x, int y);
int subtraction (int x, int y);

int main(int argc, const char * argv[]) {
    
    int first_argument;
    int second_argument;
    
    cout << "Enter first argument: ";
    cin >> first_argument;
    
    cout << "Enter second argument: ";
    cin >> second_argument;
    
    cout << first_argument << " + " << second_argument<< " = " << addition (first_argument, second_argument) << endl;
    cout << first_argument << " - " << second_argument<< " = " << subtraction (first_argument, second_argument) << endl;
    cout << first_argument << " * " << second_argument<< " = " << multiplication (first_argument, second_argument) << endl;
    cout << first_argument << " / " << second_argument<< " = " << division (first_argument, second_argument) << endl;
    return 0;
}

int addition (int x, int y)
{
    return x + y;
}

int multiplication (int x, int y)
{
    return x * y;
}

int division (int x, int y)
{
    if (0 == y)
    {
        cout << "Cannot divide by zero\n";
        return 0;
    }
    
    return x/y;
}

int subtraction (int x, int y)
{
    return x - y;
}
