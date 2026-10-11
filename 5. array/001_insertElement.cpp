#include<iostream>
using namespace std;
int main(){
    int n,pos,ele;
    cout <<"Enter the number :";
    cin >> n;

    int arr[100];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout <<"Enter the position :";
    cin >> pos;

    cout <<"Enter the element :";
    cin >> ele;

    for(int i = n; i >= pos; i--){
        arr[i] = arr[i-1];
    }

    arr[pos-1] = ele;
    n++;

    for(int i=0; i<n; i++){
        cout <<" "<< arr[i];
    }
}