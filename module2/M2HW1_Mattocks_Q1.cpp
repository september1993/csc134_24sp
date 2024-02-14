// This is Question 3. The one with pizza.

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int const SLICES_PER_GUEST = 3;
    int number_of_guests;
    int number_of_pizzas;
    int slices_per_pizza;
    int slices_left_over;

    // Start asking questions
    cout << "So you wanna throw a pizza party, huh? " << 
        "Let's see how your pizza logistics are." << endl;

    cout << "First, how many guests are you hosting? ";
    cin >> number_of_guests;
    cout << endl;

    cout << "So how many pizzas are you ordering? ";
    cin >> number_of_pizzas;
    cout << endl;

    cout << "And how many slices are in each pizza? ";
    cin >> slices_per_pizza;
    cout << endl;

    // Do math
    slices_left_over = (number_of_pizzas * slices_per_pizza) - (number_of_guests * SLICES_PER_GUEST);

    // Display results
    if (slices_left_over > 0) {
        cout << "Assuming each guest eats three slices, you'll have " <<
            slices_left_over << " slices left over." << endl << "Hope you like pizza for breakfast." << endl;
    } else if (slices_left_over == 0) {
        cout << "Wow. You've got just enough pizza for everyone to have three slices. " << endl <<
            "Maybe I'll just eat four, then." << endl;
    } else {
        cout << "LOL. You don't even have enough for everyone! " << endl <<
            "You know those single slices of pizza you can buy at Harris Teeter? " << endl <<
            "You're going to need " << abs(slices_left_over) <<  " of those." << endl;
    }

}