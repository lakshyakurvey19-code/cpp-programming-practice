#include<iostream>
using namespace std;

int main(){
    int arr[100],n,pos=0,neg=0;

    cout <<"Enter the size of array :";
    cin >>n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            neg++;
        }
        else{
            pos++;
        }
    }

    cout <<"Positive: "<<pos <<endl;
    cout <<"Negative: "<<neg <<endl;
    return 0;
}