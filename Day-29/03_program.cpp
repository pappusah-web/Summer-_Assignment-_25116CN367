#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    int choice;

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    do {
        cout << "\n===== MENU DRIVEN STRING OPERATIONS =====\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Copy String\n";
        cout << "4. Concatenate String\n";
        cout << "5. Compare Strings\n";
        cout << "6. Reverse String\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "String: " << str1 << endl;
                break;

            case 2:
                cout << "Length = " << strlen(str1) << endl;
                break;

            case 3:
                strcpy(str2, str1);
                cout << "Copied String: " << str2 << endl;
                break;

            case 4:
                cout << "Enter another string: ";
                cin.getline(str2, 100);
                strcat(str1, str2);
                cout << "Concatenated String: " << str1 << endl;
                break;

            case 5:
                cout << "Enter another string: ";
                cin.getline(str2, 100);

                if (strcmp(str1, str2) == 0)
                    cout << "Both strings are equal." << endl;
                else
                    cout << "Strings are not equal." << endl;
                break;

            case 6:
                strcpy(str2, str1);
                strrev(str2);
                cout << "Reversed String: " << str2 << endl;
                break;

            case 7:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 7);

    return 0;
}