#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;

    cout <<"Enter the Element :";
    cin >> n;

    arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout <<"Before removing duplicates element:";
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }

    cout << "\nAfter removing duplicates: ";
    for(int i=0; i<n; i++){
        bool dupli = false;
        for(int j=0; j<i; j++){
            if(arr[i] == arr[j]){
                dupli = true;
                break;
            }
        }

        if(!dupli){
            cout <<arr[i]<<" ";
        }
    }
    return 0;
}