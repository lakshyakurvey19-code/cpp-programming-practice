#include <iostream>
using namespace std;

class A{
public:
    void displayA() {
        cout << "Base class A" << endl;
    }
};

class B : public A{
public:
    void displayB() {
        cout << "Derived class B" << endl;
    }
};

int main(){
    B obj;
    obj.displayA();
    obj.displayB();
    return 0;
}
