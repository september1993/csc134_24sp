/*
CSC-134
M1T1 - Hello World
I Mattocks
1/17/24
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    string pokemon = "Sylveon";
    cout << "My favorite pokémon is: " << pokemon << endl;
    cout << "\n" << endl;
    cout << "What's yours? ";
    string answer;
    cin >> answer;
    cout <<  "You said " << answer << endl;
    cout << "I guess that's OK." << endl << endl;
    return 0;
}