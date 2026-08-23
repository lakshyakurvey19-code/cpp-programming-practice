#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, temp;
    cout << "Enter a number: ";
    cin >> n;

    temp = abs(n);
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    cout << "Sum of digits of " << n << " = " << sum << endl;
    return 0;
}
