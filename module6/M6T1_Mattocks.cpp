#include <iostream>
using namespace std;

/*
M6T1 - Basic Arrays
For each day (Monday through Friday), count the cars that pass a site
and add them to a total

Find the total
Find the average per day
*/

// function prototypes
void part1();
void part2();

int main() {
    cout << "M6T1" << endl;
    part1();
    //part2();
    return 0;
}

// function definitions
void part1() {
    cout << "Part 1" << endl << endl;
    const int SIZE = 5; // because there are five days
    int cars;
    int total = 0;
    double average;

    // find out how many cars are spotted per day
    cout << "Enter number of cars seen." << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Day " << i+1 << ": ";
        cin >> cars;
        
        // add to the total
        total = total + cars;
    }
    // find total and average
    average = (double) total / SIZE;
    cout << "Total cars: " << total << endl;
    cout << "Average cars per day: " << average << endl << endl;    
}

void part2() {
    cout << "Part 2" << endl << endl;
    const int SIZE = 5;
    int total = 0;
    double average;
    
    // array to hold the car data
    int cars[SIZE];
    
    // array to hold the days
    string days[] = {"Mon", "Tue", "Wed", "Thu", "Fri"}; //size not needed here because there are five elements 

    // get data for each day
    cout << "Enter the number of cars seen on each day." << endl;
    for (int i=0; i<SIZE; i++) {
        cout << days[i] << ": ";
        cin >> cars[i];
        //cout << endl;
    }

    // find total and average
    for (int i=0; i<SIZE; i++) {
        total += cars[i];
    }
    average = (double) total / SIZE;
    cout << "Total = " << total << endl;
    cout << "Average = " << average << endl;

    // okay now plot the data
    for (int i=0; i<SIZE; i++) {
        cout << days[i] << "\t";
        cout << cars[i] << "\t";
        for (int j=0; j<cars[i]; j++) {
            cout << "|";
        }
        cout << endl;
    }
}

