//
//  main.cpp
//  Number Translator
//
//  Created by Nate Reynolds on 9/19/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//
//  The purpose of this program is to input a number
//  and turn the number into its English name

#include <iostream>
#include <string>

using namespace std;

string numberReader(int value);
string numberHardcode (int value);
string tens(int value);

int main(int argc, const char * argv[])
{
    int number = 0;
    string response = "<unknown>";
    
    while (true)
    {
        cout << "Please enter a number between -999999 and 999999: ";
        cin >> number;
        
        if (number > 999999 || number < -999999)
        {
            cout << "The number is not valid\n";
        }
        else if (number < 0)
        {
            number = number * -1;
            cout << "negative " << numberReader(number) << endl;
        }
        else
        {
            cout << numberReader(number) << endl;
        }
        
        cout << "Do you want to try another number? (y/n): ";
        cin >> response;
        
        if (response == "n")
        {
            break;
        }
    }
    
    return 0;
}

string numberReader(int value)
{
    /*  The purpose of this function
     *  is to take in a number and
     *  return the number's english name.
     *  I have used process of elimination
     *  and modular arithmetic to achieve
     *  this goal.
     */
    
    int value_mod = 0;
    string value_name = "";
    
    if (value >= 100000)
    {
        value_mod = value / 100000;
        value_name = numberHardcode(value_mod);
        value = value - value_mod * 100000;
        value_mod = value / 10000;
        
        if (value_mod == 1)
        {
            value = value - value_mod * 100000;
            value_mod = value / 1000;
            value_name = value_name + " " + "hundred" + numberHardcode(value_mod) + " " + "thousand";
        }
        
        else
        {
            value_name = value_name + " " + "hundred" + " " + tens(value_mod);
            value = value - value_mod * 10000;
            value_mod = value / 1000;
            value_name = value_name + " " + numberHardcode(value_mod) + " " + "thousand";
        }
        
        value = value - value_mod * 1000;
        value_mod = value / 100;
        
        if (value_mod == 0)
        {
            value_name = value_name + " " + numberHardcode(value_mod);
        }
        else
            value_name = value_name + " " + numberHardcode(value_mod) + " " + "hundred";
        
        value = value - value_mod * 100;
        value_mod = value / 10;
        
        if (value_mod == 1)
        {
            value_mod = value;
            value_name = value_name + " " + numberHardcode(value_mod);
        }
        
        else
        {
            value_name = value_name + " " + tens(value_mod);
            value = value - value_mod * 10;
            value_mod = value;
            value_name = value_name + " " + numberHardcode(value_mod);
        }
    }
    
    else if (value < 100000 && value >= 10000)
    {
        value_mod = value / 10000;
        
        if (value_mod == 1)
        {
            value_mod = value / 1000;
            value_name = numberHardcode(value_mod) + " " + "thousand";
        }
        
        else
        {
            value_name = tens(value_mod);
            value = value - value_mod * 10000;
            value_mod = value / 1000;
            value_name = value_name + " " + numberHardcode(value_mod) + " " + "thousand";
        }
        
        value = value - value_mod * 1000;
        value_mod = value / 100;
        
        if (value_mod == 0)
        {
            value_name = value_name + " " + numberHardcode(value_mod);
        }
        else
            value_name = value_name + " " + numberHardcode(value_mod) + " " + "hundred";
        
        value = value - value_mod * 100;
        value_mod = value / 10;
        
        if (value_mod == 1)
        {
            value_mod = value;
            value_name = value_name + " " + numberHardcode(value_mod);
        }
        
        else
        {
            value_name = value_name + " " + tens(value_mod);
            value = value - value_mod * 10;
            value_mod = value;
            value_name = value_name + " " + numberHardcode(value_mod);
        }
    }
    
    else if (value < 10000 && value >= 1000)
    {
        value_mod = value / 1000;
        value_name = numberHardcode(value_mod) + " " + "thousand";
        value = value - value_mod * 1000;
        value_mod = value / 100;
        
        if (value_mod == 0)
        {
            value_name = value_name + " " + numberHardcode(value_mod);
        }
        else
            value_name = value_name + " " + numberHardcode(value_mod) + " " + "hundred";
        
        value = value - value_mod * 100;
        value_mod = value / 10;
        
        if (value_mod == 1)
        {
            value_mod = value;
            value_name = value_name + " " + numberHardcode(value_mod);
        }
        
        else
        {
            value_name = value_name + " " + tens(value_mod);
            value = value - value_mod * 10;
            value_mod = value;
            value_name = value_name + " " + numberHardcode(value_mod);
        }
    }
    
    else if (value < 1000 && value >= 100)
    {
        value_mod = value / 100;
        value_name = numberHardcode(value_mod) + " " + "hundred";
        value = value - value_mod * 100;
        value_mod = value / 10;
        
        if (value_mod == 1)
        {
            value_mod = value;
            value_name = value_name + " " + numberHardcode(value_mod);
        }
        
        else
        {
            value_name = value_name + " " + tens(value_mod);
            value = value - value_mod * 10;
            value_mod = value;
            value_name = value_name + " " + numberHardcode(value_mod);
        }
    }
    else if (value < 100 && value >= 10)
    {
        value_mod = value / 10;
        
        if (value_mod == 1)
        {
            value_mod = value;
            value_name = value_name + " " + numberHardcode(value_mod);
        }
        
        else
        {
            value_name = value_name + " " + tens(value_mod);
            value = value - value_mod * 10;
            value_mod = value;
            value_name = value_name + " " + numberHardcode(value_mod);
        }
    }
    else
    {
        value_mod = value;
        value_name = value_name + " " + numberHardcode(value_mod);
    }
    
    return value_name;
    
}

string numberHardcode(int value)
{
    switch (value)
    {
            
        case 0:
            return "";
            break;
            
        case 1:
            return "one";
            break;
            
        case 2:
            return "two";
            break;
            
        case 3:
            return "three";
            break;
            
        case 4:
            return "four";
            break;
            
        case 5:
            return "five";
            break;
            
        case 6:
            return "six";
            break;
            
        case 7:
            return "seven";
            break;
            
        case 8:
            return "eight";
            break;
            
        case 9:
            return "nine";
            break;
            
        case 10:
            return "ten";
            break;
            
        case 11:
            return "eleven";
            break;
            
        case 12:
            return "twelve";
            break;
            
        case 13:
            return "thirteen";
            break;
            
        case 14:
            return "fourteen";
            break;
            
        case 15:
            return "fifteen";
            break;
            
        case 16:
            return "sixteen";
            break;
            
        case 17:
            return "seventeen";
            break;
            
        case 18:
            return "eighteen";
            break;
            
        case 19:
            return "nineteen";
            break;
            
        default:
            return "error";
            break;
    }
}

string tens (int value)
{
    switch (value)
    {
        case 0:
            return "";
            break;
            
        case 2:
            return "twenty";
            break;
            
        case 3:
            return "thirty";
            break;
            
        case 4:
            return "fourty";
            break;
            
        case 5:
            return "fifty";
            break;
            
        case 6:
            return "sixty";
            break;
            
        case 7:
            return "seventy";
            break;
            
        case 8:
            return "eighty";
            break;
            
        case 9:
            return "ninety";
            break;
            
        default:
            return "error";
            break;
    }
}

