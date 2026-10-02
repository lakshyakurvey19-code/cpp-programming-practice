#include<iostream>
using namespace std;
class calc{
    public:
    void area(float r){
        int pi = 3.14;
        cout << "The area of circle is :"<< pi*r*r<<endl; 
    }
    void area(int l, int b){
        cout << "The area of triangle is :"<< l*b << endl;
    }
    void area(int side){
        cout << "The area of rectrangle is :"<< side*side << endl;
    }

};

int main(){
    calc obj;
    obj.area(2.2f);
    obj.area(23,43);
    obj.area(23);

    return 0;
}