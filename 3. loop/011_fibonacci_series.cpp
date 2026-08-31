#include<iostream>
using namespace std;
int main(){
    int n,first = 0; 
    int second = 1;
    cout << "Enter the number :";
    cin >> n;

    cout <<"THE FIBONACII SERIES :--"<< endl;

    for(int i = 1; i<=n; i++){
        cout << first << " ";
        int third = first + second;
        first = second;
        second = third;
    }

    return 0;
}