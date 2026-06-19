// Write a program to Transpose matrix. 
#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter number of rows and columns: ";
    cin >> row >> col;

    int A[100][100], T[100][100];

    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            T[j][i] = A[i][j];
        }
    }

    cout << "Transpose matrix:\n";
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}