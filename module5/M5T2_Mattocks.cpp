#include <iostream>
using namespace std;

// israel m.
// march 20, 2024
// csc 134
// m5t2

// more function prototypes
int calc_square(int num);
void print_line(int first, int second);

int main() {
    // declare these variables
    int num, num_squared;
    const int MAX = 10; // this is the largest number in the table. it doesn't need to be changed

    //print the top of the table
    cout << "Number\tNumber Squared" << endl;
    cout << "________________________" << endl;

    for (num = 1; num <= MAX; ++num) {
        // calculate the square
        num_squared = calc_square(num);
        // print the next line of the table
        print_line(num, num_squared);
    }

    return 0;
}

// define these functions again
int calc_square(int num) {
    // input: a number
    // output: that number's square
    int answer = num * num;
    return answer;
}

void print_line(int first, int second) {
    // input, two numbers
    // output: none
    // what does it do then? it prints the numbers out in table format with tabs
    cout << first << "\t" << second << endl;
}