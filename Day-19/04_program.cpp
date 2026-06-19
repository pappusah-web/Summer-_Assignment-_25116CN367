// Write a program to Find diagonal sum.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter order of square matrix: ";
    cin >> n;

    int arr[100][100];
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i][i];
    }

    cout << "Diagonal sum = " << sum;

    return 0;
}
