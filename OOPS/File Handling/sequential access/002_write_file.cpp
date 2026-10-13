#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream file("student.txt");

    file <<"Lakshya kurvey"<< endl;
    file <<"Branch : IT"<<endl;
    file <<"Welcome to the college";

    file.close();

    return 0;    
}