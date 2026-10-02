#include <iostream>
using namespace std;

class Addition
{
public:
    void add(int a, int b){
        cout << "The addition of 2 numbers is :" << a + b<< endl;
    }

    void add(int a, int b, int c){
        cout << "The addition of 3 numbers is :" << a + b + c << endl;
    }

    void add(float a, float b){
        cout << "The addition of 2 float numbers is :" << a + b << endl;
    }
};

int main()
{
    Addition obj;

    obj.add(12,32);
    obj.add(23.23f,32.66f);
    obj.add(12,43,55);
    return 0;
}