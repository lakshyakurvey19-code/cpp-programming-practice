#include<iostream>
using namespace std;

int main(){
    int arr[100],n,result = 0;;

    cout <<"Enter the size of array: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            result += arr[i];
        }
    }

    cout <<"The sum of array :"<<result;
    return 0;
}