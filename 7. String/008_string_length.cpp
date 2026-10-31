#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1;

    cout <<"Enter the string :";
    getline(cin,s1);

    int l = s1.length();

    cout <<"The length of string :"<<l;

    return 0;
}