#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char name[20];

    cout << "Enter your name: ";
    cin.getline(name, 20);

    int length = strlen(name);


      for (int row = 1; row <= length; row++)
        {

        for (int space = length; space > row; space--) {
            cout << " ";
        }

        for (int i = 0; i < row; i++) {
            cout << name[i];
        }
        cout << endl;
    }







    for (int row = length - 1; row >= 1; row--) {

        for (int space = length; space > row; space--) {
            cout << " ";
        }

        for (int i = 0; i < row; i++) {
            cout << name[i];
        }
        cout << endl;
    }

    return 0;
}
