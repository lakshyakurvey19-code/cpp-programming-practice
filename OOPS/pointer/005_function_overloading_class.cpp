#include <iostream>
using namespace std;

class Calculate
{
public:
    void calculate(int n)
    {
        cout<< "The power of a number is :"<<n * n << endl;
    }

    void calculate(long n)
    {
        cout << "The power of 3 number is :"<< n * n * n<<endl;
    }

    void calculate(float n)
    {
        cout << "The power of 2 floating point number is :"<< n * n<< endl;
    }
};

int main()
{
    Calculate obj;
    obj.calculate(12);
    obj.calculate(32l);
    obj.calculate(2.2f);
    

    return 0;
}