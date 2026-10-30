#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n,pos;

    cout <<"Enter the number of element :";
    cin >> n;

    arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout <<"Enter the position to delete: ";
    cin >> pos;

    if(pos<1 || pos>n){
        cout <<"Invalid position";
    }

    else{
        for(int i=pos-1; i<n-1; i++){
            arr[i] == arr[i+1];
        }
        n--;

        cout <<"Array after deletion: ";

        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
    }
    return 0;
}