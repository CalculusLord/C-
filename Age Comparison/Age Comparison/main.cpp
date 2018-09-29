//
//  main.cpp
//  Age Comparison
//
//  Created by Nate Reynolds on 8/14/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//
//  The purpose of this program is to compare two people's ages and determine which one is older

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int //these variables are used to store the person's age
        person_1 = 0,
        person_2 = 0;
    
    string //these strings are used to store the person's name
        p1_name = "<unknown>",
        p2_name = "<unknown>";
    
    cout << "Hello person one, please enter your name: ";
    getline (cin, p1_name);
    cout << "Please enter your age, " << p1_name <<": ";
    cin >> person_1;
    cin.ignore();
    cout << "Thank you! " << p1_name << endl << endl;
    
    cout << "Hello person two, please enter your name: ";
    getline (cin, p2_name);
    cout << "Please enter your age, " << p2_name <<": ";
    cin >> person_2;
    cin.ignore();
    cout << "Thank you! " << p2_name << endl << endl;;
    
    if (person_1 > 100 && person_2 > 100){
        cout << "Wow " << p1_name << " and " << p2_name << "! You two sure are an old bunch!\n";
    }
    else if (person_1 == person_2) {
        cout << p1_name << " and " << p2_name << ", you are the same age!\n";
    }
    else if (person_1 > person_2){
        cout << p1_name << " you are older than " << p2_name << endl;
    }
    else if (person_1 < person_2){
        cout << p1_name << " you are younger than " << p2_name << endl;
    }
    
    return 0;
}
