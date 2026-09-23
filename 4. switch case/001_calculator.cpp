#include<iostream>
using namespace std;

int main()
{
    int a, b;
    int choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operator:\n 1. Addition\n 2. Subtraction\n 3. Multiplecation\n 4. Division\n 5. modulus\n";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Result = " << a + b;
            break;

        case 2:
            cout << "Result = " << a - b;
            break;

        case 3:
            cout << "Result = " << a * b;
            break;

        case 4:
            cout << "Result = " << a / b;
            break;
        
        case 5:
            cout << "Result = " << a%b;

        default:
            cout << "Invalid operator";
    }

    return 0;
}