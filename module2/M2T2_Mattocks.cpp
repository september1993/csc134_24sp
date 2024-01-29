/*
CSC 134
M2T2 - Apple Sales 2
i Mattocks
1/29/2024
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    // Set up variables
    string user_name;
    int how_many_apples;
    double price_per_apple;
    double total_price;

    // Ask user for name, 
    cout << "Hey. What's your name? ";
    cin >> user_name;
    cout << endl << "Nice to meet you, " << user_name << "." << endl;

    // amount of apples, 
    cout << "So how many apples are looking to buy? ";
    cin >> how_many_apples;

    // and price per unit.
    cout << endl << "Alright. How much does one apple cost? $";
    cin >> price_per_apple;

    // Calculate total price
    total_price = how_many_apples * price_per_apple;

    // Print output
    cout << endl << "Here's the deal: " << how_many_apples << " apples at $" << fixed << setprecision(2) << price_per_apple << " will cost $" << total_price << " total." << endl;

    // Make a receipt, too.
    cout << "...You want a receipt, too? Here you go:" << endl;

    cout << " _____ _                 _     __   __          _ "        << endl <<
            "|_   _| |__   __ _ _ __ | | __ \\ \\ / /__  _   _| |"      << endl <<
            "  | | | '_ \\ / _` | '_ \\| |/ /  \\ V / _ \\| | | | |"    << endl <<
            "  | | | | | | (_| | | | |   <    | | (_) | |_| |_|"        << endl <<
            "  |_| |_| |_|\\__,_|_| |_|_|\\_\\   |_|\\___/ \\__,_(_)"   << endl;

    cout << "--------------------------------------------------" << endl;

    cout << "Customer: \t\t" << user_name << endl;
    cout << "Apples purchased: \t" << how_many_apples << endl;
    
    cout << fixed << setprecision(2);
    cout << "Price per unit: \t$" << price_per_apple << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "Total price: \t\t$" << total_price << endl << endl;
    cout << "Come again soon!" << endl;
    
    return 0;
}



