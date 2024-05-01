#ifndef M7T2_CLASS_MATTOCKS_H
#define M7T2_CLASS_MATTOCKS_H
#include <iostream>
using namespace std;

// declare the rectangle class
class Rectangle {
    private:
        double length, width;
        string text;
    public:
        // function prototypes
        void setLength(double);
        void setWidth(double);
        void setChar(string);
        double getLength() const;
        double getWidth() const;
        double getArea() const;
        void drawRectangle() const;
};

// define the functions
void Rectangle::setLength(double len) {
    length = len;
}

void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setChar(string ch) {
    text = ch;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getArea() const {
    double area = length * width;
    return area;
}

void Rectangle::drawRectangle() const {
    // draw the rectangle using the user-generated character
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) {
            cout << text;
        }
        cout << endl;
    }
}

#endif // M7T2_CLASS_MATTOCKS_H