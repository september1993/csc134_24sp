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
        double length, width, height, volume;
};


double Area::rect_area() {
    // declare variables
        double length;
        double width;
        double area;

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
    return volume;
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
    cout << "Given a box with a volume of " << volume << " sq. units," << endl;
    cout << "The cost of manufacturing is $" << cost << "," << endl;
    cout << "The price charged to customers is $" << charge << "," << endl;
    cout << "And the profit gained from a sale is $" << profit << "." << endl;
}

int main() {
    Area Area;
    Area.rect_area();
    Area.box_area();
    calc_box_stats();
}