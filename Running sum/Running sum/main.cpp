//
//  main.cpp
//  Running sum
//
//  Created by Nate Reynolds on 8/17/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//  The purpose of this program is to compute a running sum
//  of inputs by the user

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int
        number = 0,
        sum = 0;
    
    //  Greeting
    cout << "Hello, this program will add a number you input to the sum of numbers previously input.\n";
    cout << "Please remember to input only integers. Entering 0 will end the process.\n\n";
    
    //  Sum Loop, if 0 is entered the loop will end
    /*while (true) {
        cout << "Please enter a number: ";
        cin >> number;
        
        if (number == 0) {
            break;
        }
        else {
            sum = sum + number;
            cout << "The running sum is " << sum << endl;
        }
        
    }
    
    do
    {
        cout << "Please enter a number: ";
        cin >> number;
        
        if (number == 0)
        {
            break;
        }
        
        else
        {
            sum = sum + number;
            cout << "The running sum is " << sum << endl;
        }
    } while (true);*/
    
    for (int i = 0; true; i++) {
        cout << "Please enter a number: ";
        cin >> number;
        
        if (number == 0)
        {
            break;
        }
        
        else
        {
            sum = sum + number;
            cout << "The running sum is " << sum << endl;
        }
    }
    
    //  Final result
    cout << "The final sum is " << sum << endl;
    
    return 0;
}
