#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;

    cout <<"Enter the string: ";
    getline(cin,s);
    
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }

    cout << "Uppercase string: " << s;

    return 0;
}