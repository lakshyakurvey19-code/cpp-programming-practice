#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    int alp = 0, dig = 0, spchar = 0;

    cout <<"Enter the string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i]))
            alp++;
        else if (isdigit(s[i]))
            dig++;
        else
            spchar++;
    }

    cout << "Alphabets: " << alp << endl;
    cout << "Digits: " << dig << endl;
    cout << "Special characters: " << spchar;

    return 0;
}