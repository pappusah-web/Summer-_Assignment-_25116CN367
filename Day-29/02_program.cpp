#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, i, pos, value;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the array elements:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n===== MENU DRIVEN ARRAY OPERATIONS =====\n";
        cout << "1. Display Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Search Element\n";
        cout << "5. Find Maximum Element\n";
        cout << "6. Find Minimum Element\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array Elements: ";
                for (i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 2:
                cout << "Enter position (1 to " << n + 1 << "): ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> value;

                if (pos >= 1 && pos <= n + 1) {
                    for (i = n; i >= pos; i--)
                        arr[i] = arr[i - 1];
                    arr[pos - 1] = value;
                    n++;
                    cout << "Element inserted successfully.\n";
                } else {
                    cout << "Invalid position.\n";
                }
                break;

            case 3:
                cout << "Enter position to delete (1 to " << n << "): ";
                cin >> pos;

                if (pos >= 1 && pos <= n) {
                    for (i = pos - 1; i < n - 1; i++)
                        arr[i] = arr[i + 1];
                    n--;
                    cout << "Element deleted successfully.\n";
                } else {
                    cout << "Invalid position.\n";
                }
                break;

            case 4:
                cout << "Enter element to search: ";
                cin >> value;

                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        cout << "Element found at position " << i + 1 << endl;
                        break;
                    }
                }
                if (i == n)
                    cout << "Element not found.\n";
                break;

            case 5: {
                int max = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > max)
                        max = arr[i];
                }
                cout << "Maximum Element = " << max << endl;
                break;
            }

            case 6: {
                int min = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] < min)
                        min = arr[i];
                }
                cout << "Minimum Element = " << min << endl;
                break;
            }

            case 7:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 7);

    return 0;
}