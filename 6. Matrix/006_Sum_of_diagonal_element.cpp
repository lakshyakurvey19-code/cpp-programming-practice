#include<iostream>
using namespace std;
int main(){
    int n,arr[100][100];
    int sum = 0;
   
    cout << "Enter the order of matrix :";
    cin >> n;

    cout <<"Enter the element of matrix :" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
            sum += arr[i][i];
    }

    cout << "The sum of diagonal element: " << sum;

    return 0;
}