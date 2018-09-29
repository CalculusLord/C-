//
//  main.cpp
//  Polling
//
//  Created by Nate Reynolds on 8/19/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//
//  The purpose of this program is to create a poll and
//  print a bar graph

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
    string
    Trump =     "Trump  :\t ",
    Clinton =   "Clinton:\t ",
    Sanders =   "Sanders:\t ";
    
    int tally = 0;
    
    cout << "Hello! Welcome to the polling station!\n";
    cout << "Please submit a vote for Trump (1), Clinton (2), or Sanders (3)!\n";
    cout << "Enter 0 to end polling\n\n";
    
    while (true)
    {
        cout << "Please enter the number corresponding to your choice: ";
        cin >> tally;
        
        if (tally == 0)
        {
            break;
        }
        
        else if (tally > 3 || tally < 0)
        {
            cout << "Please enter a valid result\n";
        }
        
        else if (tally == 1)
        {
            Trump += "*";
        }
        
        else if (tally == 2)
        {
            Clinton += "*";
        }
        
        else if (tally == 3)
        {
            Sanders += "*";
        }
    }
    
    cout << "Here are the results of the polling!\n";
    cout << Trump << endl;
    cout << Clinton << endl;
    cout << Sanders << endl;
    
    return 0;
}
