#include<iostream>
using namespace std;

int main(){
    int arr[100],n,odd=0,even=0;

    cout <<"Enter the size of array :";
    cin >>n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i=0; i<n; i++){
        if(arr[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    cout <<"Even: "<<even <<endl;
    cout <<"Odd: "<<odd <<endl;
    return 0;
}