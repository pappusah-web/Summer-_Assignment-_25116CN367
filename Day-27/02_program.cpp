// Write a program to Create employee management system. 
#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{
    Employee e[100];
    int n = 0, choice, id, i;
    bool found;

    do
    {
        cout << "\n--- Employee Management System ---\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> e[n].id;
            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, e[n].name);

            cout << "Enter Salary: ";
            cin >> e[n].salary;

            n++;
            cout << "Employee Record Added.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No Records Found.\n";
            }
            else
            {
                cout << "\nEmployee Records:\n";
                for (i = 0; i < n; i++)
                {
                    cout << "ID: " << e[i].id << endl;
                    cout << "Name: " << e[i].name << endl;
                    cout << "Salary: " << e[i].salary << endl;
                    cout << "----------------------\n";
                }
            }
            break;

        case 3:
            cout << "Enter Employee ID to Search: ";
            cin >> id;
            found = false;

            for (i = 0; i < n; i++)
            {
                if (e[i].id == id)
                {
                    cout << "Record Found\n";
                    cout << "ID: " << e[i].id << endl;
                    cout << "Name: " << e[i].name << endl;
                    cout << "Salary: " << e[i].salary << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Record Not Found.\n";
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 4);

    return 0;
}