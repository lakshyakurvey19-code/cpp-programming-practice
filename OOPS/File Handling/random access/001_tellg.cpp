#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file;
    file.open("student.txt");

    cout << file.tellg();
    file.seekg(-1);

    cout <<" " << file.tellg();

    char a;
    file >> a;
    cout <<" " << a;

    file.close();
    return 0;
}