#include<iostream>
using namespace std;

int Max(int arr[], int n){
    if(n == 1){
        return arr[0];
    }

    int max = Max(arr, n - 1);

    if(arr[n - 1] > max){
        return arr[n - 1];
    }
    return max;
}

int Min(int arr[], int n){
    if(n == 1){
        return arr[0];
    }

    int min = Min(arr, n - 1);

    if(arr[n - 1] < min){
        return arr[n - 1];
    }
    return min;
}

int main(){
    int arr[100], n;

    cout << "Enter the size of array: ";
    cin >> n;

    cout <<"Enter array elements: ";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout <<"Maximum element: " << Max(arr, n) <<endl;
    cout <<"Minimum element: " << Min(arr, n);

    return 0;
}
