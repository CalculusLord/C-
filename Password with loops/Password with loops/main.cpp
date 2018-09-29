//
//  main.cpp
//  Password with loops
//
//  Created by Nate Reynolds on 8/17/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//

#include <iostream>

using namespace std;

string pass_check (string x, string y, string z)
{
    for (int i = 0; i < 3; i++)
    {
        if (x != y)
        {
            cout << "Please enter the correct password: ";
            getline (cin, y);
        }
        
        else
            break;
    }
    
    cout << endl;
    if (x != y)
    {
        cout << "Access Denied. Please contact an administrator for help.\n";
    }
    else
        cout << "Welcome to the Nate Server " << z << "!\n";
    
    
    return y;
}

int main(int argc, const char * argv[]) {
    
    string
        username = "<unknown>",
        password = "<unknwon>",
        password_check = "<unknown>";
    
    //  Opening greeting
    cout << "Hello, welcome to the Nate Server!\n";
    cout << "To access our services\n";
    cout << "Please create an account.\n";
    cout << "Username: ";
    getline (cin, username);
    cout << "Password: ";
    getline (cin, password);
    cout << endl;
    
    //  Login
    cout << "Welcome " << username << " please enter your password to login: ";
    getline (cin, password_check);
    
    pass_check (password, password_check, username);
    
    
    
    
    
    
    
    
    
    
    //  Password-checking loop
    //int i = 0; //loop condition
    //while (i < 3) {
        /*
         *  This loop checks the password three
         *  times. If the password check fails
         *  three times, the loop ends
         *
        
        if (password_check != password) {
            cout << "Please enter the correct password: ";
            getline (cin, password_check);
            i++;
        }
        else
            break;

    }
    
    for (int i = 0; i < 3; i++)
    {
        if (password_check != password)
        {
            cout << "Please enter the correct password: ";
            getline (cin, password_check);
        }
        
        else
            break;
    }
    
    int i = 0;
    do
    {
        if (password_check != password)
        {
            cout << "Please enter the correct password: ";
            getline (cin, password_check);
            i++;
        }
        else
            break;
    } while (i < 3);
    
    //  End result
    cout << endl;
    if (password_check != password)
    {
        cout << "Access Denied. Please contact an administrator for help.\n";
    }
    else
        cout << "Welcome to the Nate Server " << username << "!\n";*/
    
    
    
    return 0;
}
