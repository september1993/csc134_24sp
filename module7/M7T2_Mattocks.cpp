#include <iostream>
using namespace std;
#include "M7T2_Class_Mattocks.h"

/*
CSC 134
M7T2 - Drawing Rectangles
Israel M.
May Day, 2024
*/

int main () {
    cout << "M7T2" << endl;

    // make a rectangle
    Rectangle r;

    // prompt user for size
    double length, width, area;
    string text;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter character or emoji: ";
    cin >> text;

    // set up the rectangle
    r.setLength(length);
    r.setWidth(width);
    r.setChar(text);
    cout << "Rectangle is: " << endl;
    cout << r.getLength() << " by " << r.getWidth() << endl;
    cout << "Rectangle area = " << r.getArea() << endl;
    cout << "Printing the rectangle..." << endl; 
    r.drawRectangle();

    return 0;
}

