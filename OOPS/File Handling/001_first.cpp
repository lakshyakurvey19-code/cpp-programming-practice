#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream file;

    file.open("student.txt");
 
    file << "Name: lakshya kurvey";
    file <<"\n Course: Information Technology";

    file.close();

    cout << "Data written successfully";

    return 0;
}