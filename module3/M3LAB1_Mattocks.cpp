#include <iostream>
using namespace std;

void chooseDoor1();
void chooseDoor2();

int main () {
    int choice;

    // ask the question
    cout << "You're out of class early. Do you go home to study (1), or head to the arcade (2) ?" << endl;
    cout << "Type 1 or 2: ";
    cin >> choice;

    if (1 == choice) {
        chooseDoor1();
    } else if (2 == choice) {
        chooseDoor2();
    } else {
        cout << "I'm sorry, but that's not a valid choice." << endl;
    }

    cout << "Thank you for playing!" << endl;
    return 0; // program ran without error
} // end of main()

// now, define functions

void chooseDoor1() {
    cout << "You tackled a concept you were having trouble with..." << endl;
    cout << "...but MAN, you're boring. Learn to live a little!" << endl;
}

void chooseDoor2() {
    cout << "You played Dance Dance Revolution for hours..." << endl;
    cout << "...and forgot about your math exam tomorrow. Do you even want to pass?" << endl;
}

