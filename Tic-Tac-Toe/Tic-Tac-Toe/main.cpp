//
//  main.cpp
//  Tic-Tac-Toe
//
//  Created by Nate Reynolds on 8/24/18.
//  Copyright © 2018 Nate Reynolds. All rights reserved.
//

#include <iostream>

using namespace std;

int player_number(int x);

int main(int argc, const char * argv[])
{
    enum game_token
    {
        X,
        O,
        E
    };
    
    game_token
        top_right = E,
        top_center = E,
        top_left = E,
        center_right = E,
        center = E,
        center_left = E,
        bottom_right = E,
        bottom_center = E,
        bottom_left = E,
        loop_check = E; //this variable will be used as a condition to exit a loop
    
    int
        current_player = 1, //this variable will be fed into player_number()
        position = 0, //place that is being played
        win_condition = 0; //determines if the game was won: 0 means no and 1 means yes
    
    for (int i = 0; i < 9; i++)
    {
        /*  This loop is the main body of the game
         *  the loop will continue until a win condition
         *  is met or until nine turns pass.
         */
        
        current_player++;
        cout << "It is Player " << player_number(current_player) << "'s turn:\n";
        
        //  These couts construct the game board
        cout << top_right << "\t" << top_center << "\t" << top_left << endl;
        cout << center_right << "\t" << center << "\t" << center_left << endl;
        cout << bottom_right << "\t" << bottom_center << "\t" << bottom_left << endl << endl;
        
        cout << "Choose where to play:\n";
        cout << "\t1. Top Right\n";
        cout << "\t2. Top Center\n";
        cout << "\t3. Top Left\n";
        cout << "\t4. Center Right\n";
        cout << "\t5. Center\n";
        cout << "\t6. Center Left\n";
        cout << "\t7. Bottom Right\n";
        cout << "\t8. Bottom Center\n";
        cout << "\t9. Bottom Left\n";
        
        do
        {
            //  This loop determines how to interpret where the player places their token
            cout << ">> ";
            cin >> position;
            switch (position)
            {
                case 1:
                    if (top_right != E)
                    {
                        cout << "Not a valid move! Please choose a valid move\n";
                    }
                    else if (player_number(current_player) == 1)
                    {
                        top_right = X;
                        loop_check = top_right;
                    }
                    else
                    {
                        top_right = O;
                        loop_check = top_right;
                    }
                    break;
                    
                case 2:
                    if (top_center != E)
                    {
                        cout << "Not a valid move! Please choose a valid move\n";
                    }
                    else if (player_number(current_player) == 1)
                    {
                        top_center = X;
                        loop_check = top_center;
                    }
                    else
                    {
                        top_center = O;
                        loop_check = top_center;
                    }
                    break;
                    
                case 3:
                    if (top_left != E)
                    {
                        cout << "Not a valid move! Please choose a valid move\n";
                    }
                    else if (player_number(current_player) == 1)
                    {
                        top_left = X;
                        loop_check = top_left;
                    }
                    else
                    {
                        top_left = O;
                        loop_check = top_left;
                    }
                    break;
                    
                case 4:
                    if (center_right != E)
                    {
                        cout << "Not a valid move! Please choose a valid move\n";
                    }
                    else if (player_number(current_player) == 1)
                    {
                        center_right = X;
                        loop_check = center_right;
                    }
                    else
                    {
                        center_right = O;
                        loop_check = center_right;
                    }
                    break;
                    
                case 5:
                    if (center != E)
                    {
                        cout << "Not a valid move! Please choose a valid move\n";
                    }
                    else if (player_number(current_player) == 1)
                    {
                        center = X;
                        loop_check = center;
                    }
                    else
                    {
                        center = O;
                        loop_check = center;
                    }
                    break;
                    
                case 6:
                    if (center_left != E)
                    {
                        cout << "Not a valid move! Please choose a valid move\n";
                    }
                    else if (player_number(current_player) == 1)
                    {
                        center_left = X;
                        loop_check = center_left;
                    }
                    else
                    {
                        center_left = O;
                        loop_check = center_left;
                    }
                    break;
                    
                case 7:
                    if (bottom_right != E)
                    {
                        cout << "Not a valid move! Please choose a valid move\n";
                    }
                    else if (player_number(current_player) == 1)
                    {
                        bottom_right = X;
                        loop_check = bottom_right;
                    }
                    else
                    {
                        bottom_right = O;
                        loop_check = bottom_right;
                    }
                    break;
                    
                case 8:
                    if (bottom_center != E)
                    {
                        cout << "Not a valid move! Please choose a valid move\n";
                    }
                    else if (player_number(current_player) == 1)
                    {
                        bottom_center = X;
                        loop_check = bottom_center;
                    }
                    else
                    {
                        bottom_center = O;
                        loop_check = bottom_center;
                    }
                    break;
                    
                case 9:
                    if (bottom_left != E)
                    {
                        cout << "Not a valid move! Please choose a valid move\n";
                    }
                    else if (player_number(current_player) == 1)
                    {
                        bottom_left = X;
                        loop_check = bottom_left;
                    }
                    else
                    {
                        bottom_left = O;
                        loop_check = bottom_left;
                    }
                    break;
                    
                default:
                    cout << "Please enter a valid move\n";
                    break;
            }
        } while (loop_check == E);
        loop_check = E;
        
        /*  checking for win condition, there are eight wincons.
         *  If a win-condition is met, the loop will break. If not
         *  the loop continues
         */
        if (top_right != E && top_right == top_center && top_center == top_left)
        {
            win_condition = 1;
            break;
        }
        else if (center_right != E && center_right == center && center == center_left)
        {
            win_condition = 1;
            break;
        }
        else if (bottom_right != E && bottom_right == bottom_center && bottom_center == bottom_left)
        {
            win_condition = 1;
            break;
        }
        else if (top_right != E && top_right == center_right && center_right == bottom_right)
        {
            win_condition = 1;
            break;
        }
        else if (top_center != E && top_center == center && center == bottom_center)
        {
            win_condition = 1;
            break;
        }
        else if (top_left != E && top_left == center_left && center_left == bottom_left)
        {
            win_condition = 1;
            break;
        }
        else if (top_right != E && top_right == center && center == bottom_left)
        {
            win_condition = 1;
            break;
        }
        else if (bottom_right != E && bottom_right == center && center == top_left)
        {
            win_condition = 1;
            break;
        }
    }
    
    //Displays results of the game
    if (win_condition == 1)
    {
        cout << "Player " << player_number(current_player) << " wins!\n";
    }
    else
        cout << "The game is a tie\n";
    
    cout << top_right << "\t" << top_center << "\t" << top_left << endl;
    cout << center_right << "\t" << center << "\t" << center_left << endl;
    cout << bottom_right << "\t" << bottom_center << "\t" << bottom_left << endl << endl;
    
    return 0;
}

int player_number(int x)
{
    /*  This function is intended
     *  to return the number of the
     *  player who's turn it is e.g.
     *  player 1 and player 2
     */
    return ((x % 2) + 1);
}
