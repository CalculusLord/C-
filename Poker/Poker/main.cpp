//
//  main.cpp
//  Poker
//
//  Created by Nate Reynolds on 8/31/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//
//  This program deals a poker hand, then ranks your hand

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

//  Global Enumerated Type Declarations

enum card_number
{
    Ace = 1,
    Two = 2,
    Three = 3,
    Four = 4,
    Five = 5,
    Six = 6,
    Seven = 7,
    Eight = 8,
    Nine = 9,
    Ten = 10,
    Jack = 11,
    Queen = 12,
    King = 13
};

enum card_suite
{
    Clubs = 1,
    Hearts = 2,
    Diamonds = 3,
    Spades = 4
};

//  Function Declarations

string card (int number);
string cardSuite (int suite);
int cardID (int number, int suite);
int randCard (card_number low, card_number high);
int randSuite (card_suite low, card_suite high);
void ranker(int ncard1, int ncard2, int ncard3, int ncard4, int ncard5, int scard1, int scard2, int scard3, int scard4, int scard5);

int main(int argc, const char * argv[])
{
    /*  For this program we need to develop
     *  machinery that keeps you from
     *  drawing more cards than 4 of the same type
     *  e.g. 5 Jacks and also keeps you from drawing
     *  two cards of the same type and suite e.g.
     *  two Jack of Clubs
     */
    
    srand(time(NULL));
    
    cout << "Welcome to Poker! You will be dealt five cards your hand will be rated\n";
    cout << "After given the opportunity to exchange cards\n";
    
    while (true)
    {
        int
            nfirst = randCard(Ace, King),
            nsecond = randCard(Ace, King),
            nthird = randCard(Ace, King),
            nfourth = randCard(Ace, King),
            nfifth = randCard(Ace, King);
        
        int
            sfirst = randSuite(Clubs, Spades),
            ssecond = randSuite(Clubs, Spades),
            sthird = randSuite(Clubs, Spades),
            sfourth = randSuite(Clubs, Spades),
            sfifth = randSuite(Clubs, Spades);
        
        string play = "<unknown>";
        
        while (nfirst == nsecond == nthird == nfourth == nfifth)
        {
            /*  The purpose of this loop is to prevent
             *  a five-of-a-kind hand
             */
            
            nfirst = randCard(Ace, King);
            nsecond = randCard(Ace, King);
            nthird = randCard(Ace, King);
            nfourth = randCard(Ace, King);
            nfifth = randCard(Ace, King);
        }
        
        
        while (true)
        {
            /*  The purpose of this loop is to prevent
             *  getting two of the same card i.e.
             *  two Ace of Spades
             */
            
            int
                ID_1 = cardID(nfirst, sfirst),
                ID_2 = cardID(nsecond, ssecond),
                ID_3 = cardID(nthird, sthird),
                ID_4 = cardID(nfourth, sfourth),
                ID_5 = cardID(nfifth, sfifth);
            
            if (ID_1 == ID_2 || ID_1 == ID_3 || ID_1 == ID_4 || ID_1 == ID_5)
            {
                sfirst = randSuite(Clubs, Spades);
            }
            else if (ID_2 == ID_3 || ID_2 == ID_4 || ID_2 == ID_5)
            {
                ssecond = randSuite(Clubs, Spades);
            }
            else if (ID_3 == ID_4 || ID_3 == ID_5)
            {
                sthird = randSuite(Clubs, Spades);
            }
            else if (ID_4 == ID_5)
            {
                sfourth = randSuite(Clubs, Spades);
            }
            else
                break;
        }
        
        int
            ID_1 = cardID(nfirst, sfirst),
            ID_2 = cardID(nsecond, ssecond),
            ID_3 = cardID(nthird, sthird),
            ID_4 = cardID(nfourth, sfourth),
            ID_5 = cardID(nfifth, sfifth);
        
        cout << "Here is your hand:\n";
        cout << "\t1. " << card(nfirst) << cardSuite(sfirst) <<  endl;
        cout << "\t2. " << card(nsecond) << cardSuite(ssecond) <<  endl;
        cout << "\t3. " << card(nthird) << cardSuite(sthird) <<  endl;
        cout << "\t4. " << card(nfourth) << cardSuite(sfourth) <<  endl;
        cout << "\t5. " << card(nfifth) << cardSuite(sfifth) <<  endl;
        cout << "Exchange? (y/n): ";
        cin >> play;
        
        if (play == "y")
        {
            for (int i = 0; i < 5; i++)
            {
                int exchange = -1;
                cout << "Which card would you like to exchange?\n";
                cout << "You may exchange " << 5 - i << " more cards.\n";
                cout << "Enter 0 to stop exchanging: ";
                cin >> exchange;
                
                if (exchange == 0)
                {
                    break;
                }
                
                else
                {
                    switch (exchange)
                    {
                        case 1:
                            do
                            {
                                nfirst = randCard(Ace, King);
                                sfirst = randSuite(Clubs, Spades);
                            } while (ID_1 == nfirst * sfirst);
                            ID_1 = cardID(nfirst, sfirst);
                            break;
                        
                        case 2:
                            do
                            {
                                nsecond = randCard(Ace, King);
                                ssecond = randSuite(Clubs, Spades);
                            } while (ID_2 == nsecond * ssecond);
                            ID_2 = nsecond * ssecond;
                            break;
                        
                        case 3:
                            do
                            {
                                nthird = randCard(Ace, King);
                                sthird = randSuite(Clubs, Spades);
                            } while (ID_3 == nthird * sthird);
                            ID_3 = nthird * sthird;
                            break;
                        
                        case 4:
                            do
                            {
                                nfourth = randCard(Ace, King);
                                sfourth = randSuite(Clubs, Spades);
                            } while (ID_4 == nfourth * sfourth);
                        ID_4 = nfourth * sfourth;
                        break;
                        
                        case 5:
                            do
                            {
                                nfifth = randCard(Ace, King);
                                sfifth = randSuite(Clubs, Spades);
                            } while (ID_5 == nfifth * sfifth);
                            ID_5 = nfifth * sfifth;
                            break;
                        
                        default:
                            break;
                    }
                
                    while (true)
                    {
                        /*  The purpose of this loop is to prevent
                         *  getting two of the same card i.e.
                         *  two Ace of Spades
                         */
                    
                        if (ID_1 == ID_2 || ID_1 == ID_3 || ID_1 == ID_4 || ID_1 == ID_5)
                        {
                            sfirst = randSuite(Clubs, Spades);
                        }
                        else if (ID_2 == ID_3 || ID_2 == ID_4 || ID_2 == ID_5)
                        {
                            ssecond = randSuite(Clubs, Spades);
                        }
                        else if (ID_3 == ID_4 || ID_3 == ID_5)
                        {
                            sthird = randSuite(Clubs, Spades);
                        }
                        else if (ID_4 == ID_5)
                        {
                            sfourth = randSuite(Clubs, Spades);
                        }
                        else
                            break;
                    }
                
                    ID_1 = cardID(nfirst, sfirst);
                    ID_2 = cardID(nsecond, ssecond);
                    ID_3 = cardID(nthird, sthird);
                    ID_4 = cardID(nfourth, sfourth);
                    ID_5 = cardID(nfifth, sfifth);
                }
            } //for loop bracket
        } //if bracket
        
        cout << "Here is your new hand:\n";
        cout << "\t1. " << card(nfirst) << cardSuite(sfirst) <<  endl;
        cout << "\t2. " << card(nsecond) << cardSuite(ssecond) <<  endl;
        cout << "\t3. " << card(nthird) << cardSuite(sthird) <<  endl;
        cout << "\t4. " << card(nfourth) << cardSuite(sfourth) <<  endl;
        cout << "\t5. " << card(nfifth) << cardSuite(sfifth) <<  endl;
        ranker(nfirst, nsecond, nthird, nfourth, nfifth, sfirst, ssecond, sthird, sfourth, sfifth);
        cout << endl;
        cout << "Play Again? (y/n): ";
        cin >> play;
        cout << endl << endl;
        
        if (play != "y")
        {
            break;
        }
        
        // ended here, need to create hand ranker
        
    }//big while bracker
    return 0;
}

//  Function Definitions

string card (int number)
{
    /*  The purpose of this function
     *  is to take in two values
     *  and return the name of the
     *  appropriate card
     */
    
    switch (number) //  This switch case returns the number of the card
    {
        case 1:
            return "Ace of ";
            break;
            
        case 2:
            return "Two of ";
            break;
            
        case 3:
            return "Three of ";
            break;
            
        case 4:
            return "Four of ";
            break;
            
        case 5:
            return "Five of ";
            break;
            
        case 6:
            return "Six of ";
            break;
            
        case 7:
            return "Seven of ";
            break;
            
        case 8:
            return "Eight of ";
            break;
            
        case 9:
            return "Nine of ";
            break;
            
        case 10:
            return "Ten of ";
            break;
            
        case 11:
            return "Jack of ";
            break;
            
        case 12:
            return "Queen of ";
            break;
            
        case 13:
            return "King of ";
            break;
            
        default:
            cout << number;
            return "Error ";
            break;
    }
}

string cardSuite (int suite)
{
    switch (suite) //This switch statement returns the suite of the card
    {
        case 1:
            return "Clubs";
            break;
            
        case 100:
            return "Hearts";
            break;
            
        case 10000:
            return "Diamonds";
            break;
            
        case 1000000:
            return "Spades";
            break;
            
        default:
            cout << suite;
            return "Error";
            break;
    }
}

int randCard (card_number low, card_number high)
{
    return rand() % (high - low) + low;
}

int randSuite (card_suite low, card_suite high)
{
    /*  The purpose of this function
     *  is to randomize the card suites
     *  but also return either: 1, 100,
     *  10000, or 1000000 in order to give
     *  each card a unique identifier
     */
    
    int randomizer = rand() % (high - low) + low;
    
    if (randomizer == 1)
    {
        return 1;
    }
    else if (randomizer == 2)
        return 100;
    else if (randomizer == 3)
        return 10000;
    else
        return 1000000;
}

int cardID (int number, int suite)
{
    //  This function gives a card a unique ID
    return number * suite;
}

void ranker (int ncard1, int ncard2, int ncard3, int ncard4, int ncard5, int scard1, int scard2, int scard3, int scard4, int scard5)
{
    /*  This function is intended to rank
     *  the hand of the player
     */
    
    int holder = 0;
    
    int number = ncard1 * ncard2 * ncard3 * ncard4 * ncard5;
    int suite = scard1 + scard2 + scard3 + scard4 + scard5;
    
    //cout << ncard1 << " " << ncard2 << " " << ncard3 << " " << ncard4 << " " << ncard5 << endl;
    
    while (true)
    { //intended to sort the cards
        
        if (ncard1 > ncard2)
        {
            holder = ncard1;
            ncard1 = ncard2;
            ncard2 = holder;
        }
        else if (ncard2 > ncard3)
        {
            holder = ncard2;
            ncard2 = ncard3;
            ncard3 = holder;
        }
        else if (ncard3 > ncard4)
        {
            holder = ncard3;
            ncard3 = ncard4;
            ncard4 = holder;
        }
        else if (ncard4 > ncard5)
        {
            holder = ncard4;
            ncard4 = ncard5;
            ncard5 = holder;
        }
        else
            break;
    }
    
    //cout << ncard1 << " " << ncard2 << " " << ncard3 << " " << ncard4 << " " << ncard5 << endl;
    
    
    if (number == (13 * 12 * 11 * 10 * 1) || number == (number * (number + 1) * (number + 2) * (number + 3) * (number + 4) * (number + 5)))
    {  //checking for straights, straight flush, and royal flush
        if ((suite / 5) == 1 || (suite / 5) == 100 || (suite / 5) == 10000 || (suite / 5) == 1000000)
        {   //checking for flush
            if (number == (13 * 12 * 11 * 10 * 1))
            {
                cout << "Your hand is a Royal Flush, the best hand!";
            }
            else
            {
                cout << "Your hand is a Straight Flush, second best";
            }
        }
        
        else
        {
            cout << "Your hand is a Straight, sixth best";
        }
    }
    
    else if (ncard1 == ncard2)
    {
        if (ncard2 == ncard3)
        {
            if (ncard3 == ncard4)
            {
                cout << "Your hand is a Four-of-a-Kind, third best";
            }
            else if (ncard4 == ncard5)
            {
                cout << "Your hand is a Full House, fourth best";
            }
            else
            {
                cout << "Your hand is a Three-of-a-Kind, seventh best";
            }
        }
        else if (ncard3 == ncard4 == ncard5)
        {
            cout << "Your hand is a Full House, fourth best";
        }
        else if (ncard3 == ncard4 || ncard3 == ncard5 || ncard4 == ncard5)
        {
            cout << "Your hand is a Two-Pair, eighth best";
        }
        else
        {
            cout << "Your hand is a One-Pair, ninth best";
        }
    }
    
    else if (ncard2 == ncard3)
    {
        if (ncard3 == ncard4 && ncard4 == ncard5)
        {
            cout << "Your hand is a Four-of-a-Kind, third best";
        }
        else if (ncard3 == ncard4)
        {
            cout << "Your hand is a Three-of-a-Kind, seventh best";
        }
        else if (ncard4 == ncard5)
        {
            cout << "Your hand is a Two-Pair, eighth best";
        }
        else
        {
            cout << "Your hand is a One-Pair, ninth best";
        }
    }
    
    else if (ncard3 == ncard4)
    {
        if (ncard4 == ncard5)
        {
            cout << "Your hand is a Three-of-a-Kind, seventh best";
        }
        else
        {
            cout << "Your hand is a One-Pair, ninth best";
        }
    }
    
    else if (ncard4 == ncard5)
    {
        cout << "Your hand is a One-Pair, ninth best";
    }
    
    else if ((suite / 5) == 1 || (suite / 5) == 100 || (suite / 5) == 10000 || (suite / 5) == 1000000)
    {
        cout << "Your hand is a Flush, fifth best";
    }
    else
    {
        cout << "Your hand is junk";
    }
}
