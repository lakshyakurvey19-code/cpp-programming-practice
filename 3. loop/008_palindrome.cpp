#include<iostream>
using namespace std;
int main(){
    int n, rev = 0;
    int digit;
    cout << "Enter the number :";
    cin >> n;

    int original = n;

    while(n>0){
        digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }

    if(original == rev){
        cout << "It is a palindrome";
    }
    else{
        cout << "It is not a palindrome";
    }
    return 0;
}