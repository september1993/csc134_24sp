#include "M6LAB1_Utility.h"

/*
CSC 134 (C++ Programming)
M6LAB1 - Buckshot
Israel M.
April 10, 2024
Similation of a shotgun magazine
*/

int magazine[MAX_SHELLS] = {LIVE, LIVE, BLANK, BLANK, EMPTY, EMPTY};

int main() {
    cout << "M6LAB1" << endl;

    cout << "The magazine holds:" << endl;

    // loop through the magazine
    for (int i=0; i<MAX_SHELLS; i++) {
        int shell = magazine[i]; // gets current shell
        string name = shell_name(shell);
        cout << name << ", ";
    }
    cout << endl;
    
    // 2nd option: Range-based for loop
    for (int shell: magazine) {
        cout << shell << ", ";
    }
    cout << endl;
}