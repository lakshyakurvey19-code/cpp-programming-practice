#include<iostream>
using namespace std;
int main(){
    int area,circumf,r;
    float pi = 3.14;
    cout << "Enter the radius of the circle :";
    cin >> r;

    area = pi*r*r;
    circumf = 2*pi*r;

    cout << "Area of the circle is "<< area << endl;
    cout << "Circumference of the circle is "<< circumf << endl;

    return 0;
}
