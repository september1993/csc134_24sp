/*
CSC 134
M2LAB1 - Finding Area
I Mattocks
1/31/2024
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Area {
    public:
        double rect_area();
        double box_area();
        // declare variables
        static double length, width, height, volume, area; // Made these variables static so that they are the same in every instance of the class
};

double Area::length = 0; // The second part of the solution to my problem was to initialize the public static variables outside of the class
double Area::width = 0;
double Area::height = 0;
double Area::volume = 0;
double Area::area = 0;

double Area::rect_area() {

    // greet user
    cout << "Part 1 - Area of a Rectangle" << endl;

    // get input
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << endl << "Enter the width of the rectangle: ";
    cin >> width;

    // perform calculations
    area = length * width;

    // print output
    cout << endl << "The area of the rectangle is " << area << endl << endl;
    return 0;
}

double Area::box_area() {

    // greet user
    cout << "Part 2 - Area of a Box" << endl;

    // get input
    cout << "Enter the length of the box: ";
    cin >> length;

    cout << endl << "Enter the width of the box: ";
    cin >> width;

    cout << endl << "Enter the height of the box: ";
    cin >> height;

    // perform calculations
    volume = length * width * height;

    // print output
    cout << endl << "The volume of the box is " << volume << endl << endl;
    return 0;
}

void calc_box_stats() {
    // declare constants
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    double cost, charge, profit;

    // calculate cost, charge, and profit of box volume from box_area()
    Area Area;
    cost = COST_PER_CUBIC_FOOT * Area.volume;
    charge = CHARGE_PER_CUBIC_FOOT * Area.volume;
    profit = charge - cost;

    // output results of calculations
    cout << setprecision(2) << fixed << showpoint;
    cout << "Given a box with a volume of " << Area.volume << " sq. units," << endl;    // basically, because the Area variable wasn't static,
    cout << "The cost of manufacturing is $" << cost << "," << endl;                    // every new instance of Area would reset it back to 0.00. fixed that.
    cout << "The price charged to customers is $" << charge << "," << endl;             // i also needed to initialize the Area variables or i'd get an error "undefined" 
    cout << "And the profit gained from a sale is $" << profit << "." << endl;          
}

int main() {
    Area Area;
    Area.rect_area();
    Area.box_area();
    calc_box_stats();
}