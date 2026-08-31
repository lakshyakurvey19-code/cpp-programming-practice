#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    int count = 0;

    for (int num = start; num <= end; num++) {
        if (num <= 1) continue; 

        bool isPrime = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            count++;
        }
    }

    cout << "Number of prime numbers between " << start << " and " << end << " = " << count << endl;

    return 0;
}
