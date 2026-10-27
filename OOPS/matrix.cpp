
#include <iostream>
using namespace std;

class Matrix {
    int a[10][10], r, c;

public:
    void read(){
        cout << "Enter rows and columns: ";
        cin >> r >> c;

        cout << "Enter elements:\n";
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> a[i][j];
    }

    void print(){
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    void add(Matrix b){
        cout << "Addition:\n";
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++)
                cout << a[i][j] + b.a[i][j] << " ";
            cout << endl;
        }
    }

    void subtract(Matrix b){
        cout << "Subtraction:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++)
                cout << a[i][j] - b.a[i][j] << " ";
            cout << endl;
        }
    }

    void multiply(Matrix b){
        cout << "Multiplication:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < b.c; j++){
                int sum = 0;
                for (int k = 0; k < c; k++)
                    sum += a[i][k] * b.a[k][j];
                cout << sum << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    Matrix A, B;

    cout << "First matrix:\n";
    A.read();

    cout << "Second matrix:\n";
    B.read();


    A.add(B);
    A.subtract(B);
    A.multiply(B);

    return 0;
}
