#include <iostream>
using namespace std;

int main() {
    float basic, hra, da, allowances, gross;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    cout << "Enter HRA: ";
    cin >> hra;

    cout << "Enter DA: ";
    cin >> da;

    cout << "Enter Other Allowances: ";
    cin >> allowances;

    gross = basic + hra + da + allowances;

    cout << "Gross Salary = " << gross << endl;

    return 0;
}
