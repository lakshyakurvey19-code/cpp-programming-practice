#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    
    cout <<"Enter the string:";
    getline(cin,s);

    int i = s.length()-1;

    while (i>=0){
        cout << s[i];
        i--;
    }
    
    return 0;
}