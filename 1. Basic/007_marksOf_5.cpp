#include <iostream>
using namespace std;

int main() {
    int num1,num2,num3,num4,num5;
    int result;

    cout << "Enter the marks of 5 subject";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    result = num1+num2+num3+num4+num5;
    int marks = result / 5;

    cout << "The sum of 5 subject is :" << result << endl;
    cout << "The marks of student is :" << marks;
    
    return 0;
}
