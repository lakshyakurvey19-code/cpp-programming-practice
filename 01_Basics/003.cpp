#include<iostream>
using namespace std;
int main(){
    float cel,fah;

    cout << "Enter temperaturn in Celsius :";
    cin >> cel;

    fah = (cel*9/5) + 32;

    cout << "The temperaturn in Fahrenheit :"<< " " << fah;

    return 0;
}