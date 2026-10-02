#include <iostream>
using namespace std;

// Compile-Time Polymorphism: Function Overloading by Data Type
class Print {
public:
    void display(int x) {
        int c = x + 20;
        cout << "Integer value (+20): " << c << endl;
    }

    void display(float y) {
        float c = y + 20.0f;
        cout << "Float value (+20): " << c << endl;
    }
};

int main() {
    Print obj;

    obj.display(35);       // Calls display(int)
    obj.display(34.3f);    // Calls display(float)

    return 0;
}