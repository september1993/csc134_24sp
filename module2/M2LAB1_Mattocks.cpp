/*
CSC 134
M2LAB1 - Finding Area
I Mattocks
1/31/2024
*/

#include <iostream>
using namespace std;

int main() {
    // greet user
    cout << "Part 1 - Area of a Rectangle" << endl;

    // declare variables
    double length;
    double width;
    double area;

    // get input
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << endl << "Enter the width of the rectangle: ";
    cin >> width;

    // perform calculations
    area = length * width;

    // print output
    cout << endl << "The area of the rectangle is " << area << endl;
}