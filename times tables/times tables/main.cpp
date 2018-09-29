//
//  main.cpp
//  times tables
//
//  Created by Nate Reynolds on 8/17/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    for (int i = 0; i < 10; i++) {
        cout << '\t' << i;
    }
    
    cout << endl;
    
    for (int i = 0; i < 10; i++) {
        cout << i;
        for (int j = 0; j < 10; ++j) {
            cout << '\t' << i * j;
        }
        cout << endl;
    }
    return 0;
}
