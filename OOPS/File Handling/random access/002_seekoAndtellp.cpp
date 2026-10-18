#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file;
    file.open("student.txt",ios::app);

    cout << file.tellp();
    file.seekp(4);

    cout << file.tellp();
    file << "i am lakshya kurvey";
    file.close();

    return 0;
}