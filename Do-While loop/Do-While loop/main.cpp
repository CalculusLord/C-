//
//  main.cpp
//  Do-While loop
//
//  Created by Nate Reynolds on 8/17/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string password;
    
    do {
        cout << "Please enter your password: ";
        cin >> password;
    } while (password != "foobar");
    cout << "Welcome, you got the password right";
    return 0;
}
