#include <iostream>
using namespace std;

int main() {
    float r, h;
    int choice;

    cout << "Enter radius: ";
    cin >> r;

    cout << "Enter height: ";
    cin >> h;

    cout << "\n1. Radius \n2. Cricumference \n3. Volume";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Radius = " << r;
            break;

        case 2:
            cout << "Circumference = " << 2 * 3.14 * r;
            break;

        case 3:
            cout << "Volume = " << 3.14 * r * r * h;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}