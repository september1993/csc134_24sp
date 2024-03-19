#include <iostream>

using namespace std;

class UserInput {
  public:
    int user_input;
    void getInt() {  
      cout << "Enter a number between 1 and 12: ";
      cin >> user_input;
    }
};

int main() {

    UserInput UI;
    UI.getInt();

    for (int i=1; i<=12; i++) {
        cout << UI.user_input << " times " << i << " is " << UI.user_input * i << "." << endl;
    }

    return 0;
}
