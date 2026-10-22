#include<iostream>
#include<string>
using namespace std;

int main(){
    string st1, st2;
    int i = 0;

    cout <<"Enter a string: ";
    getline(cin, st1);

    while(i < st1.length()){
        st2 += st1[i];
        i++;
    }

    cout <<"Copied String :"<<st2;

    return 0;
}