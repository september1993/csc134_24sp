#ifndef M7T1_RESTAURANTS_MATTOCKS_H 
#define M7T1_RESTAURANTS_MATTOCKS_H
#include <string>
#include <iostream>

using namespace std;


class Restaurant {
    private:
        string name;
        double rating;
        string comment; //optional
    public:
        // constructor: how we make objects
        Restaurant(string n, double r, string c) {
            name = n;
            rating = r;
            comment = c;
        }
        void setName(string n) {
            name = n;
        }
        void setRating(double r) {
            rating = r;
        }
        string getName() const {
            return name;
        }
        double getRating() const {
            return rating;
        }
        // utility function -- get a printable version
        void printReview() {
            cout << "Name: " + name + " ";
            cout << "(" << rating << "/5 stars)" << endl;
            cout << "Comments: " << comment << endl;
        }
};

#endif