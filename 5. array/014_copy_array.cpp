#include<iostream>
using namespace std;

int main(){
    int arr[100],n;
    int brr[100];

    cout <<"Enter the size of array :";
    cin >>n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        brr[i] = arr[i];
    }

    cout <<"Element of secode array: ";
    for(int i=0; i<n; i++){
        cout << brr[i]<<" ";
    }
    
    return 0;
}