//
//  main.cpp
//  Menu
//
//  Created by Nate Reynolds on 8/17/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//  The purpose of this program is to create a menu
//  and have the user choose from a list of options

#include <iostream>

using namespace std;

void eggs ()
{
    cout << "Eggs coming right up!\n";
}

void sausage ()
{
    cout << "Sausage coming right up!\n";
}

void pancakes ()
{
    cout << "Pancakes coming right up!\n";
}

void burger ()
{
    cout << "Burger coming right up!\n";
}

void Song ()
{
    int i = 99;
    do {
        cout << i << " bottles of beer on the wall" << endl;
        cout << i << " bottles of beer" << endl;
        cout << "you take one down, pass it around" << endl;
        cout << i - 1 << " bottles of beer on the wall" << endl << endl;
        i--;
    } while (i >= 1);
}

int Calculator (int first_argument, int second_argument)
{
    cout << first_argument << " + " << second_argument<< " = " << first_argument + second_argument << endl;
    cout << first_argument << " - " << second_argument<< " = " << first_argument - second_argument << endl;
    cout << first_argument << " * " << second_argument<< " = " << first_argument * second_argument << endl;
    cout << first_argument << " / " << second_argument<< " = " << first_argument / second_argument << endl;
    return 0;
}

int main(int argc, const char * argv[])
{
    int item;
    
    cout << "Welcome to Nate's Restaurant!\n";
    cout << "Please choose from the menu: \n";
    cout << "1. \t Eggs \n";
    cout << "2. \t Breakfast Sausage \n";
    cout << "3. \t Pancake Stack \n";
    cout << "4. \t House Burger \n";
    cout << endl << "Choose an option: ";
    
    do
    {
        cin >> item;
        
        switch (item)
        {
            case 1:
                eggs();
                break;
            
            case 2:
                sausage();
                break;
            
            case 3:
                pancakes();
                break;
            
            case 4:
                burger();
                break;
            
            default:
                cout << "Please choose an item from the menu\n";
                cout << "1. \t Eggs \n";
                cout << "2. \t Breakfast Sausage \n";
                cout << "3. \t Pancake Stack \n";
                cout << "4. \t House Burger \n";
                cout << endl << "Choose an option: ";
                break;
        }
    } while (item < 1 || item > 4);
    
    /*while (true)
    {
        //  The purpose of this loop is to
        //  have the user select one of the listed items
        //  If they choose an item not on the list
        //  the program will give them a message and the
        //  loop will continue until a valid option
        //  is given.
        
        if (item == "eggs")
        {
            eggs();
            break;
        }
        
        else if (item == "sausage")
        {
            sausage();
            break;
        }
        
        else if (item == "pancakes")
        {
            pancakes();
            break;
        }
        
        else if (item == "burger")
        {
            burger();
            break;
        }
        else
        {
            cout << "please choose a valid option: \n";
            cout << " eggs \n sausage \n pancakes \n burger \n";
            getline (cin, item);
        }
    }
    
    
    
    do {
        getline (cin, item);
        
        if (item == "eggs") {
            break;
        }
        else if (item == "sausage")
            break;
        else if (item == "pancakes")
            break;
        else if (item == "burger")
            break;
        else {
            cout << "please choose a valid option: \n";
            cout << " eggs \n sausage \n pancakes \n burger \n";
        }
    } while (true);
    
    for (int i = 0 ; true; i++) {
        getline (cin, item);
        
        if (item == "eggs") {
            break;
        }
        else if (item == "sausage")
            break;
        else if (item == "pancakes")
            break;
        else if (item == "burger")
            break;
        else {
            cout << "please choose a valid option: \n";
            cout << " eggs \n sausage \n pancakes \n burger \n";
        }
    }*/
    
    //cout << choice << " coming right up!\n";
    return 0;
}
