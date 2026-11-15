#include<iostream>
using namespace std;
int main(){
    int arr[100][100];
    int c,r;
   
    cout << "Enter the number of rows and columns: ";
    cin >> r >> c;

    cout <<"Enter the element of matrix :" << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<r; i++){
        int sum = 0;
        for(int j=0; j<c; j++){
            sum += arr[i][j];
        }
        cout << "The sum o Row " << i+1 << " is " << sum << endl;
    }

    for(int i=0; i<c; i++){
        int sum = 0;
        for(int j=0; j<r; j++){
            sum += arr[i][j];
        }
        cout << "The sum o Row " << i+1 << " is " << sum << endl;
    }
    
    return 0;
}