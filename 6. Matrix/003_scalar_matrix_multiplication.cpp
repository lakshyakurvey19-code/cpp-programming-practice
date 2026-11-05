#include<iostream>
using namespace std;

int main(){
    int arr[100][100];
    int n,m,x;

    cout <<"Enter rows and coloums of matrix: ";
    cin >> n >> m;

    cout <<"Enter elements of first matrix:\n";
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    cout <<"Enter the value: ";
    cin >> x;

    cout <<"multiplication of Matrix with scalar value:" << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << arr[i][j] * x  << " "; 
        }
        cout << endl;
    }
    return 0;
}
