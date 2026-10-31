#include<iostream>
using namespace std;

void input(int arr[], int n, int i){
    if(i == n){
        return;
    }
    cin >> arr[i];

    input(arr,n,i+1);
}

void print(int arr[], int n, int i){
    if(i == n){
        return ;
    }

    cout << arr[i] <<" ";
    print(arr,n,i+1);
}

int main(){
    int arr[100],n;

    cout <<"Enter the size of array:";
    cin >> n;

    cout <<"Enter array element: ";
    input(arr,n,0);

    cout <<"Array element : ";
    print(arr,n,0);

    return 0;
}