//
//  main.cpp
//  Coin Flip
//
//  Created by Nate Reynolds on 8/26/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string coinflip();

int main(int argc, const char * argv[])
{
    srand(time(NULL));
    cout << "This program flips a coin one hundred times\n";
    
    for (int i = 0; i < 100; i++)
    {
        cout << coinflip() << endl;
    }
    return 0;
}

string coinflip()
{
    if ((rand() % 2) == 0)
    {
        return "Heads";
    }
    else
        return "Tails";
}
