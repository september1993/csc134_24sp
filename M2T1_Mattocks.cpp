/*
CSC 134
M2T1 - Receipt Calculator
i Mattocks
1/24/2024
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Print receipt for a restaurant
    // The price before taxt
    // The amount of tax owed (%8)
    // The total including tax
    cout << "M2T1" << endl;
    // Set up variables
    string meal_name = "Value Meal";
    double meal_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount;
    double total_price; // meal + tax

    // Calculate the tax amount and the total price
    tax_amount = meal_price * tax_percent;
    total_price = meal_price + tax_amount;

    // Print receipt
    cout << "Thank you for dining with us" << endl;
    cout << endl;
    cout << fixed << setprecision(2);
    cout << meal_name << "\t" << "$" << meal_price << endl;
    cout << "Tax (8%)" << "\t" << "$" << tax_amount << endl;
    cout << "---------------------------" << endl;
    cout << "Total" << "\t\t" << "$" << total_price << endl;
    cout << endl;
    return 0;
}