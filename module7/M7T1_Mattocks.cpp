#include <iostream>
#include "M7T1_Restaurants_Mattocks.h"
using namespace std;


int main () {
    cout << "Restaurant Review Program" << endl;
    
    // make a new Restaurant object
    
    Restaurant breakfast = Restaurant("Waffle House", 3.0, "The metal chairs are suprisingly ergonomic and easy to throw.");
    
    Restaurant lunch = Restaurant("Cheddar's", 5.0, "The mango iced tea is great.");
    
    //cout << breakfast.getName() << endl;
    //cout << breakfast.getRating() << endl;
    cout << "Breakfast: " << endl;
    breakfast.printReview();
    cout << "Lunch: " << endl;
    lunch.printReview();
    
    
    return 0;

}