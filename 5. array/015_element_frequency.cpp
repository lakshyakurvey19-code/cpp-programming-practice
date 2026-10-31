#include<iostream>
using namespace std;

int main(){
    int arr[100],n;

    cout <<"Enter the size of array :";
    cin >>n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        int count = 1;

        if(arr[i] == -1){
            continue;
        }

        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
                arr[j] = -1;
            }
        }
        cout <<arr[i] <<" occurs " <<count<<" time"<<endl;
    }
    return 0;
}