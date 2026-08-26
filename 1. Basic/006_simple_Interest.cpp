#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    float st;

    cout << "Enter the principal, Interest Rate and Time in Year :";
    cin >> p >> r >> t;

    st = (p*r)*t;

    cout << "The simple Interest is :"<< st;

    return 0;
}
