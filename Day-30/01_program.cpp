#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    int roll[MAX], age[MAX], n = 0, choice, searchRoll;
    string name[MAX];

    do {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (n < MAX) {
                cout << "Enter Roll Number: ";
                cin >> roll[n];

                cin.ignore();
                cout << "Enter Name: ";
                getline(cin, name[n]);

                cout << "Enter Age: ";
                cin >> age[n];

                n++;
                cout << "Student record added successfully.\n";
            } else {
                cout << "Record is full.\n";
            }
            break;

        case 2:
            if (n == 0) {
                cout << "No records found.\n";
            } else {
                cout << "\nStudent Records:\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nStudent " << i + 1 << endl;
                    cout << "Roll Number: " << roll[i] << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Age: " << age[i] << endl;
                }
            }
            break;

        case 3:
            if (n == 0) {
                cout << "No records found.\n";
            } else {
                cout << "Enter Roll Number to search: ";
                cin >> searchRoll;

                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (roll[i] == searchRoll) {
                        cout << "\nStudent Found:\n";
                        cout << "Roll Number: " << roll[i] << endl;
                        cout << "Name: " << name[i] << endl;
                        cout << "Age: " << age[i] << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Student not found.\n";
            }
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}