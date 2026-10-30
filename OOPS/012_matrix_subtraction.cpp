#include <iostream>
using namespace std;

class Matrix {
    int arr[10][10];
    int r = 0, c = 0;

public:
    void input() {
        cout << "Enter the number of rows and columns: ";
        cin >> r >> c;

        cout << "Enter the elements:" << endl;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> arr[i][j];
            }
        }
    }

    void output() {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    void subt(const Matrix &brr) {
        cout << "Subtraction:" << endl;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << arr[i][j] - brr.arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix A, B;

    cout << "First matrix:" << endl;
    A.input();

    cout << "Second matrix:" << endl;
    B.input();

    A.subt(B);

    return 0;
}
