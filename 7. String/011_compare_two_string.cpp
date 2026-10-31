#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1,s2;

    cout <<"Enter the first string: ";
    getline(cin,s1);

    cout <<"Enter the second string: ";
    getline(cin, s2);

    if (s1 == s2){
        cout << "Strings are equal";
    }
    else{
        cout << "Strings are not equal";
    }

    return 0;
}