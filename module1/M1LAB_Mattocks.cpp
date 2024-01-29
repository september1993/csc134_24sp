/*
CSC 134
M1LAB - Apple Sales
I Mattocks
1/22/24
*/

#include <iostream>
using namespace std;

int main() {
    // Apple sales program
    string name = "Israel Mattocks";
    // number of apples owned
    int num_apples = 100;
    // price per apple
    double price_per_apple = 0.25;
    // price for all of the apples
    double total_price = num_apples * price_per_apple;

    // calculate the total price of the apples
    // todo

    // print all he information about the orchard
    // todo
    cout << "Welcome to " << name;
    cout << "'s apple orchard." << endl;

    cout << "We have " << num_apples << " apples." << endl;
    cout << "Each one costs $" << price_per_apple << endl;
    cout << "Making for a total cost of $" << total_price << endl;
    cout << endl;

    return 0;
}