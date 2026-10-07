#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("student.txt");
    


    file<<"Name:Shraddha";
    file<<"\n Course : CSE";
    file<<"\nname:lakshya rathi";
    file<<"\n Course:IT";
 
    file.close();
    file.open("new.txt");

    cout<<"Data written successfully.";
    return 0;
}