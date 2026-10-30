#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++){
        str[i] = '*';
    }

    cout << "Converted String: " << str;
    return 0;
}
