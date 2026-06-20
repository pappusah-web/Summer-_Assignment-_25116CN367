// Write a program to Check symmetric matrix
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the order of matrix: ";
    cin >> n;

    int a[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    bool symmetric = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = false;
                break;
            }
        }
    }

    if (symmetric)
        cout << "Matrix is symmetric.";
    else
        cout << "Matrix is not symmetric.";

    return 0;
}