#include<iostream>
using namespace std;
class student{ // student is a new data type.
public:    
    string name;
    int rollno;
    float cgpa;

};

int main(){
    student s1;
    s1.name = "Lakshya kurvey";
    s1.rollno = 70;
    s1.cgpa = 8.1;
    
    student s2;
    s2.name = "Mahi Jha";
    s2.rollno = 50;
    s2.cgpa = 6.1;

    cout<<s1.name<<" "<< s1.rollno<<" "<<s1.cgpa<<" "<<endl;
    return 0;

}