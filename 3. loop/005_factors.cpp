#include<iostream>
using namespace std;
int main(){
    int n,count = 0;
    cout <<"Enter the number :";
    cin >> n;
    
    cout<<"factors of " << n <<" are :"<< endl;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            cout << i << " ";
            count += i;
        }
    }
    cout << "\nThe sum of factors is :"<< count;

    return 0;
}