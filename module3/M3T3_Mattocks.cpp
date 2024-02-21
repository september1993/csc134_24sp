#include <iostream>
#include <cstdlib>
#include <ctime>
#include <map>
#include <stdlib.h> 
using namespace std;

int main () {
    int roll, die1, die2;
    bool win = false, lose = false, point = false, game_finished = false;
    
    cout << "Welcome to the craps table." << endl;
    /* cout << "What are your two rolls? ";
    cin >> die1 >> die2; */

    map<int, string> dice;
    dice[1] = "⚀";
    dice[2] = "⚁";
    dice[3] = "⚂";
    dice[4] = "⚃";
    dice[5] = "⚄";
    dice[6] = "⚅";

    srand(time(NULL));
    
    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;

    roll = die1 + die2;
    cout << "Your roll is: " << dice[die1] << " and " << dice[die2] << ", which makes " << roll << " total." << endl; 

    if (roll == 7 || roll == 11) {
        win = true;
    } else if (roll == 2 || roll == 3 || roll == 12) {
        lose = true;
    } else {
        point = true;
    }

    while (!game_finished) {
        if (win) {
            cout << "You win!" << endl;
            game_finished = true;
        } else if (lose) {
            cout << "You lose..." << endl;
            game_finished = true;
        } else if (point) {
            int point_num = roll;
            cout << "Point is " << point_num << endl;
            do {
                die1 = rand() % 6 + 1;
                die2 = rand() % 6 + 1;

                roll = die1 + die2;
                cout << "Your roll is: " << dice[die1] << " and " << dice[die2] << ", which makes " << roll << " total." << endl;
                } while (point_num != roll && 7 != roll);
            if (roll == point_num) {
                win = true;
            } else if (roll == 7) {
                lose = true;
            }
        } else {
            cout << "Error :P" << endl;
        }
    }

    return 0;
}