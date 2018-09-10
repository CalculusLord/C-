//
//  main.cpp
//  12 Days of Christmas
//
//  Created by Nate Reynolds on 8/24/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//  The purpose of this program is to print the lyrics
//  to "The Twelve Days of Christmas"

#include <iostream>

using namespace std;

string day_suffix (int x);

int main(int argc, const char * argv[])
{
    for (int i = 12; i > 0; i--)
    {
        cout << "On the " << 13 - i << day_suffix(13 - i) << " day of Christmas my true love gave to me\n";
        
        switch (i)
        {
            case 1:
                cout << "twelve drummers dancing\n";
                
            case 2:
                cout << "eleven pipers piping\n";
                
            case 3:
                cout << "ten lords a-leaping\n";
                
            case 4:
                cout << "nine ladies dancing\n";
                
            case 5:
                cout << "eight maids a-milking\n";
                
            case 6:
                cout << "seven swans a-swimming\n";
                
            case 7:
                cout << "six geese a-laying\n";
                
            case 8:
                cout << "five golden rings\n";
                
            case 9:
                cout << "four calling birds\n";
                
            case 10:
                cout << "three french hens\n";
                
            case 11:
                cout << "two turrtle doves\n";
                cout << "and ";
                
            case 12:
                cout << "a partridge in a pear tree\n\n";
                break;
                
            default:
                break;
        }
    }
    return 0;
}

string day_suffix (int x)
{
    /*  The purpose of this function
     *  is to return the correct suffix
     *  for a number e.g. 1 will return
     *  the suffix 'st' for 1st, 2 will
     *  return the suffix 'nd' for 2nd
     *  3 will return 'rd' for 3rd etc.
     */
    
    switch (x)
    {
        case 1:
            return "st";
            break;
            
        case 2:
            return "nd";
            break;
            
        case 3:
            return "rd";
            break;
            
        default:
            return "th";
            break;
    }
}
