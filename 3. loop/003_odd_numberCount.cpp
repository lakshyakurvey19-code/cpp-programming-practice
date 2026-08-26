#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the number :";
    cin >> n;
    int count = 0;
    
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            count += i;
        }
    }
    cout << "The sum of odd number is :" << count;

    return 0;
}