#include<iostream>
using namespace std;
class animal
{
    public:
    int age;
    public:
    void display()
    {
        cout<<"Its animal class"<<endl;
        cout<<"Enter age:";
        cin>>age;
         cout<<"Its an animal and its age is "<<age<<endl;
    }
};
class dog:public animal
{
    public:
    void display2()
    {
        cout<<"Its a dog and its age is "<<age<<endl;
    }
};
int main()
{
    dog obj;
    dog *p;
    p=&obj;
    p->display();
    p->display2();
    return 0;

}