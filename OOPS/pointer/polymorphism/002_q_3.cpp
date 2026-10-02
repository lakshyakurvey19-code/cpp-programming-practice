#include <iostream>
using namespace std;

// Compile-Time Polymorphism: Function Overloading by Number and Type of Arguments
class Print {
public:
    void display(int x, int y) {
        int sum = x + y;
        cout << "Sum of integers (" << x << " + " << y << "): " << sum << endl;
    }

    void display(float z) {
        float result = z + 20;
        cout << "Float value (+20): " << result << endl;
    }
};

int main() {
    Print obj;

    obj.display(35, 10);   // Calls display(int, int)
    obj.display(34.3f);    // Calls display(float)

    return 0;
}