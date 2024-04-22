#include <iostream>
#include <vector>

// CSC 134
// M6LAB2 - Vectors and Linked Lists
// Israel M.
// April 22, 2024

using namespace std;

struct Node {
    int num;    // the data
    Node* next; // pointer to next node
};

int main () {
    cout << "M6LAB2" << endl;
    // part 1 - vector
    // create a vector of ints
    vector <int> numbers;
    // add numbers to the end
    int num;
    int how_many;
    cout << "Enter how many numbers? ";
    cin >> how_many;
    cout << "Enter " << how_many << " numbers (space or enter in between).";
    cout << endl;
    for (int i=0; i < how_many; i++) {
        cout << "Enter a number: ";
        cint >> num;
        numbers.push_back(num);
    
    }

    // print out the vector
    cout << endl;
    cout << "Vector contents: ";
    for (int i: numbers) {
        cout << i << ",";
    }

    cout << endl;

    // part 2 - linked list
    // 

}