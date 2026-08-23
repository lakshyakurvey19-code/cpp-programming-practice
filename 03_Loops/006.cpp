#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0, remainder, original;
    cout << "Enter an integer: ";
    cin >> n;

    original = n;
    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber << endl;
    if (original == reversedNumber && original >= 0) {
        cout << original << " is a Palindrome." << endl;
    }

    return 0;
}
