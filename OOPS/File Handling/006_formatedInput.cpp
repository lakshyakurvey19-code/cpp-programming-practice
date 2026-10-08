#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    ifstream fout("student.txt");

    int age = 15;
    float marks = 30.34;

    fout >>age;
    fout >> marks;

    fout.close();

    return 0;
}