// Write a program to Merge two sorted arrays.
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;

    int arr1[100];
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cin >> n2;

    int arr2[100];
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int merged[200];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    while (i < n1)
        merged[k++] = arr1[i++];

    while (j < n2)
        merged[k++] = arr2[j++];

    for (int i = 0; i < k; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}