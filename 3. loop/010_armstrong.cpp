#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num, n=0;
    int remainder;
    float result = 0.0;
    cout << "Enter the number :";
    cin >> num;

    int original = num;
    while(original != 0){
        original = original/10;
        ++n;
    }

    original = num;
    while(original < 0){
        remainder = original%10;
        result += pow(remainder,n);
        original /= 10;
    }

    if((int)result == num){
        cout <<num << " is an armstrong number.";
    }
    else{
        cout << num <<" is not an armstrong number.";
    }

    return 0;
}