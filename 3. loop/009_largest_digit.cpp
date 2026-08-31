#include<iostream>
using namespace std;
int main(){
    int n;
    int largest = 0;
    int digit;
    cout << "Enter the number :";
    cin >> n;

    for(;n>0; n = n/10){
        digit = n%10;
        if(digit > largest){
            largest = digit;
        }
    }
    
    cout << "Largest digit = " << largest;
    return 0;
}