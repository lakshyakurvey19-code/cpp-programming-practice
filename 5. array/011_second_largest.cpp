#include<iostream>
using namespace std;

int main(){
    int arr[100],n;

    cout <<"Enter the size of array :";
    cin >>n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int larg = arr[0];
    int seclarg = -1;

    for(int i=0; i<n; i++){
        if(arr[i] > larg){
            seclarg = larg;
            larg = arr[i];
        }

        else if(arr[i] > seclarg && arr[i] != larg){
            seclarg = arr[i];
        }
    }

    cout <<"Second Largest Element: "<<seclarg;

    return 0;
}