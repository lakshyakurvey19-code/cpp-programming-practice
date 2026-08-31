#include<iostream>
using namespace std;
int main(){
    int n;
    int digSum = 0;
    cout << "Enter the number :";
    cin >> n; 

    while(n > 0){
        int lastDig = n % 10;
        n /= 10;
        digSum ++;
    }
    
    cout << "count of digit is :" << digSum << endl;
    return 0;
}