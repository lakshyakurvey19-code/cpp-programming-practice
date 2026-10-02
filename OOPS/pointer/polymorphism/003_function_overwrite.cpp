#include<iostream>
using namespace std;
class base{
    public:
        void show(){
            cout<<"data of base class";
        }
        // void show(){
        //     cout<<"data in my ";
        // }
};
class child:public base{
    public:
        void show(){
            cout<<"Data of child class"<<endl;
        }
        void display(){
            cout <<"baba yaga"<<endl;
        }
};

int main(){
    child c1;
    base *ptr;

    ptr = &c1;
    c1.display();
    ptr ->show();

    return 0;

}