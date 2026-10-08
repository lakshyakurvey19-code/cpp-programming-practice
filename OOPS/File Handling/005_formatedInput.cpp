#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("student.txt");

    int age = 15;
    float marks = 30.34;

    fout <<"Student age is :"<< age << endl;
    fout <<"Student marks is :"<< marks << endl;

    fout.close();

    return 0;
}