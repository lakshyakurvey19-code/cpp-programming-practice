#include<iostream>
using namespace std;
class grandparent{
    public:
        void show(){
            cout << "i am grandparent class" << endl;
        }
};
class parent : public grandparent{
    public:
        void show2(){
            cout << "I am parent class" << endl;
        }
};
class child : public grandparent{
    public:
        void show3(){
            cout << "i am child class" << endl;
        }
};
class kid : public parent,public child{
    public:
        void show4(){
            cout << "i am kid class" << endl;
        }
};
int main(){
    kid obj;
    obj.show();
    obj.show2();
    obj.show3();
    obj.show4();

    return 0;
}
