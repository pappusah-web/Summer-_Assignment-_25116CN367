#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    int empId[MAX];
    string empName[MAX], empDept[MAX];
    float empSalary[MAX];

    int n = 0, choice, searchId;

    do {
        cout << "\n===== Mini Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (n < MAX) {
                cout << "Enter Employee ID: ";
                cin >> empId[n];

                cin.ignore();
                cout << "Enter Employee Name: ";
                getline(cin, empName[n]);

                cout << "Enter Department: ";
                getline(cin, empDept[n]);

                cout << "Enter Salary: ";
                cin >> empSalary[n];

                n++;
                cout << "Employee added successfully.\n";
            } else {
                cout << "Employee record is full.\n";
            }
            break;

        case 2:
            if (n == 0) {
                cout << "No employee records found.\n";
            } else {
                cout << "\n===== Employee Records =====\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nEmployee " << i + 1 << endl;
                    cout << "ID         : " << empId[i] << endl;
                    cout << "Name       : " << empName[i] << endl;
                    cout << "Department : " << empDept[i] << endl;
                    cout << "Salary     : " << empSalary[i] << endl;
                }
            }
            break;

        case 3:
            if (n == 0) {
                cout << "No employee records found.\n";
            } else {
                cout << "Enter Employee ID to search: ";
                cin >> searchId;

                bool found = false;

                for (int i = 0; i < n; i++) {
                    if (empId[i] == searchId) {
                        cout << "\nEmployee Found\n";
                        cout << "ID         : " << empId[i] << endl;
                        cout << "Name       : " << empName[i] << endl;
                        cout << "Department : " << empDept[i] << endl;
                        cout << "Salary     : " << empSalary[i] << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Employee not found.\n";
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