//
//  main.cpp
//  Slot Machine
//
//  Created by Nate Reynolds on 8/30/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

enum slot
{
    cherry=1,
    one_bar=2,
    two_bar=3,
    three_bar=4,
    big_seven=5,
};

//  Function declarations
int randRange(slot low, slot high);
int pay_table(int x, int y, int z, int bet);
string interpreter(int value);

int main(int argc, const char * argv[])
{
    srand(time(NULL));
    
    int
        wager = 0,
        slot_1 = 0,
        slot_2 = 0,
        slot_3 = 0,
        winnings = 0,
        final_winnings = 100;
    
    string
        lever = "<unknown>",
        replay = "<unknown>";
    
    cout << "Hello! Welcome to the slots! You start with $100 complimentary of the House! ";
    
    while (true)
    {
        cout << "Please enter your bet: ";
        cin >> wager;
        
        if (wager > final_winnings)
        {
            while (true)
            {
                cout << "You cannot bet more money than you have!\n\n";
                cout << "Please enter your bet: ";
                cin >> wager;
                
                if (wager < final_winnings)
                {
                    break;
                }
            }
        }
        cout << "Spinning...\n\n";
        
        slot_1 = randRange(cherry, big_seven);
        slot_2 = randRange(cherry, big_seven);
        slot_3 = randRange(cherry, big_seven);
        
        cout << "Here are your results:\n";
        cout << interpreter(slot_1) << "--" << interpreter(slot_2) << "--" << interpreter(slot_3) << endl;
        cout << "You won " << pay_table(slot_1, slot_2, slot_3, wager) << endl << endl;
    
        
        winnings = pay_table(slot_1, slot_2, slot_3, wager);
        final_winnings = final_winnings + winnings - wager;
        
        cout << "You have $" << final_winnings << " left!" << endl;
        cout << "Play again? (y/n): ";
        cin >> replay;
        
        if (replay == "y")
        {
            if (final_winnings <= 0)
            {
                cout << "You can't gamble with no money! Goodbye!\n";
                break;
            }
        }
        
        else if (replay != "y")
            break;
    }
    
    return 0;
}


//  Below are the function definitions

int randRange (slot low, slot high)
{
    //  this function gets a random rumber in-between the specified range
    return rand() % (high - low + 1) + low;
}

int pay_table (int x, int y, int z, int bet)
{
    /*  This is the pay table for the slot machine
     *  it calculates the winnings of the player.
     *  There are the winnings"
     *  one cherry = x2
     *  two cherries = x5
     *  three one bars or three cherries = x10
     *  three two bars = x25
     *  three three bars = x40
     *  three sevens = x80
     */
    
    if (x == cherry)
    {
        if (y == cherry && z == cherry)
        {
            return bet * 10;
        }
        
        else if (y == cherry || z == cherry)
        {
            return bet * 5;
        }
        
        else
            return bet * 2;
    }
    
    else if (y == cherry)
    {
        if (z == cherry)
        {
            return bet * 5;
        }
        
        else
            return bet * 2;
    }
    
    else if (z == cherry)
    {
        return bet * 2;
    }
    
    else if (x == one_bar && y == x && z == y)
    {
        return bet * 10;
    }
    
    else if (x == two_bar && y == x && z == y)
    {
        return bet * 25;
    }
    
    else if (x == three_bar && y == x && z == y)
    {
        return bet * 40;
    }
    
    else if (x == big_seven && y == x && z == y)
    {
        cout << "the JACKPOT! You won ";
        return bet * 80;
    }
    
    else
        return bet * 0;
     
}

string interpreter (int value)
{
    //  This function takes in a number and retuns a string
    
    switch (value)
    {
        case 1:
            return "Cherry";
            break;
            
        case 2:
            return "Bar";
            break;
            
        case 3:
            return "Double Bar";
            break;
            
        case 4:
            return "Triple Bar";
            break;
            
        case 5:
            return "Seven";
            break;
            
        default:
            cout << "Invalid input";
            return "\n";
            break;
    }
}

