#include <iostream>
using namespace std;

class Calculator {
public:
    void calculate(int num) {
        cout << "Square of integer " << num << " = " << num * num << endl;
    }

    void calculate(int num, int power) {
        cout << "Cube of integer " << num << " = " << num * num * num << endl;
    }

    void calculate(float num) {
        cout << "Square of float " << num << " = " << num * num << endl;
    }
};

int main() {
    Calculator obj;
    obj.calculate(12);
    obj.calculate(5, 2);
    obj.calculate(12.34f);


    return 0;
}
