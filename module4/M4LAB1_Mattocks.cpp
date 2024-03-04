#include <iostream>

using namespace std;

int main()
{
    cout << "ASCII Rectangles" << endl;
    cout << "#" << endl;
    cout << endl;
    int width;
    int height;

    cout << "Enter width: ";
    cin >> width;
    cout << endl;

    cout << "Enter height: ";
    cin >> height;
    cout << endl;

    cout << "Print " << width << " characters";
    cout << endl;
    for (int i = 0; i < width; i++) {
        cout << "#";
    }
    cout << endl;

    cout << "Print " << height << " lines" << endl;
    for (int i = 0; i < height; i++) {
        cout << "#" << endl;
    }

    cout << "Do both -- print rectangle" << endl;
    cout << endl;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "# ";
        }
        cout << endl;
    }

    return 0;
}
