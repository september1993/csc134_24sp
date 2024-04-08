// M5LAB2
// Israel Mattocks
// April 7, 2023

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

double getLength();
double getWidth();
double calcArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = calcArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getLength() {
    // returns a user-generated length (as a double)
    double length;
    cout << endl << "Enter the length of the rectangle: ";
    cin >> length;
    
    return length;
}

double getWidth() {
    // returns a user-generated length (as a double)
    double width;
    cout << endl << "Enter the width of the rectangle: ";
    cin >> width;
    
    return width;
}

double calcArea(double length, double width) {
    // calculates area from the user-generated length and width (as a double)
    double area;
    area = length * width;
    return area;
}

void displayData(double length, double width, double area) {
   // outputs the user-generated length and width, along with the calculated area
   cout << endl << "Here are the dimensions and area of your rectangle:";
   cout << endl << "The length is \t\t\t" << length;
   cout << endl << "The width is \t\t\t" << width;
   cout << endl << "Which means that your area is \t" << area;
}