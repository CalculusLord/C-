//
//  main.cpp
//  99 bottles
//
//  Created by Nate Reynolds on 8/17/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//  The purpose of this program is to print the lyrics to 99 bottles of beer on the wall

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    /*for (int i = 99; i >= 1; --i) {
        cout << i << " bottles of beer on the wall" << endl;
        cout << i << " bottles of beer" << endl;
        cout << "you take one down, pass it around" << endl;
        cout << i - 1 << " bottles of beer on the wall" << endl << endl;
    }
    
    int i = 99;
    while (i >= 1) {
        cout << i << " bottles of beer on the wall" << endl;
        cout << i << " bottles of beer" << endl;
        cout << "you take one down, pass it around" << endl;
        cout << i - 1 << " bottles of beer on the wall" << endl << endl;
        i--;
    }*/
    
    int i = 99;
    do {
        cout << i << " bottles of beer on the wall" << endl;
        cout << i << " bottles of beer" << endl;
        cout << "you take one down, pass it around" << endl;
        cout << i - 1 << " bottles of beer on the wall" << endl << endl;
        i--;
    } while (i >= 1);
    
    return 0;
}
