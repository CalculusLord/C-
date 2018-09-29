//
//  main.cpp
//  String
//
//  Created by Nate Reynolds on 8/12/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string user_first_name = "<unknown>";
    string user_last_name = "<unknown>";
    
    cout << "Please enter your first name: ";
    cin >> user_first_name;
    cout << "Hi " << user_first_name << endl;
    
    cout << "Please enter your last name: ";
    cin >> user_last_name;
    cout << "Hi " << user_last_name << endl;
    
    string user_full_name = user_first_name + " " + user_last_name;
    
    cout << "Your name is: " << user_full_name << endl;
    
    return 0;
}
