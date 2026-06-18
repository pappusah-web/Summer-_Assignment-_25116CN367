// Write a program to Binary search.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int low = 0, high = n - 1;
    int found = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            found = mid;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found != -1)
        cout << "Element found at index " << found;
    else
        cout << "Element not found";

    return 0;
}