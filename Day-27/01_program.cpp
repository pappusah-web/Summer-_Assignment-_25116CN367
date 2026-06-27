// Write a program to Create student record management system. 
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    Student s[100];
    int n = 0, choice, roll, i;
    bool found;

    do
    {
        cout << "\n--- Student Record Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Roll No: ";
            cin >> s[n].roll;
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, s[n].name);

            cout << "Enter Marks: ";
            cin >> s[n].marks;

            n++;
            cout << "Student Record Added.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No Records Found.\n";
            }
            else
            {
                cout << "\nStudent Records:\n";
                for (i = 0; i < n; i++)
                {
                    cout << "Roll No: " << s[i].roll << endl;
                    cout << "Name: " << s[i].name << endl;
                    cout << "Marks: " << s[i].marks << endl;
                    cout << "----------------------\n";
                }
            }
            break;

        case 3:
            cout << "Enter Roll No to Search: ";
            cin >> roll;
            found = false;

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    cout << "Record Found\n";
                    cout << "Roll No: " << s[i].roll << endl;
                    cout << "Name: " << s[i].name << endl;
                    cout << "Marks: " << s[i].marks << endl;
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