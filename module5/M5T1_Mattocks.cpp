#include <iostream>
using namespace std;

// israel m.
// march 20, 2024
// csc 134
// m5t1

// these are prototypes. they tell the compiler that "a function is coming"
void greet_user();
int get_answer();

int main() {
    cout << "M5T1" << endl;
    // call the greet user function
    greet_user();
    cout << "Your lucky number is: ";
    cout << get_answer() << endl;

    return 0;
}

// now we have to define the functions that were previously prototyped
void greet_user() {
    // greet the user
    cout << "Hello, user!" << endl;
    return; // return; is assumed in void functions
}

int get_answer() {
    // provide the one true answer
    // look i get the reference but that doesn't make it any less nerdy :p
    return 42;
}
