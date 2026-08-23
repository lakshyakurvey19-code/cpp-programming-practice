#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows for pyramid: ";
    cin >> rows;

    cout << "\nRight-Angled Triangle Pattern:\n";
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nCentered Pyramid Pattern:\n";
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
