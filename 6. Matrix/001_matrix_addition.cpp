#include<iostream>
using namespace std;

int main(){
    int arr[100][100],brr[100][100];
    int n,m;

    cout <<"Enter rows and coloums of matrix: ";
    cin >> n >> m;

    cout <<"Enter elements of first matrix:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    cout <<"Enter elements of second matrix:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> brr[i][j];
        }
    }

    cout <<"Addition of Matrices:" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] + brr[i][j] << " "; 
        }
        cout << endl;
    }

    return 0;
}
