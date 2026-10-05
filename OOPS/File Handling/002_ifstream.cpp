#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
    ifstream in;
    string st;

    in.open("student.txt");
    // while(getline(in,st)){
    //     cout << st << endl;
    // }
    in >> st;
    cout << st << endl;

    in.close();

    return 0;
}