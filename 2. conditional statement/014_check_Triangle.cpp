#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "The triangle is valid." << endl;

        if (a = b = c) {
            cout << "It is an Equilateral triangle." << endl;
        } else if (a == b || b == c || a == c) {
            cout << "It is an Isosceles triangle." << endl;
        } else {
            cout << "It is a Scalene triangle." << endl;
        }
    } else {
        cout << "The triangle is NOT valid." << endl;
    }

    return 0;
}
