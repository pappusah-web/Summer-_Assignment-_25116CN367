// Write a program to Develop complete mini 
// project using arrays, strings and functions. 

#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int id[MAX];
string name[MAX];
int age[MAX];
float marks[MAX];
int totalStudents = 0;

// Function to add student
void addStudent() {
    if (totalStudents >= MAX) {
        cout << "Record is full!\n";
        return;
    }

    cout << "Enter Student ID: ";
    cin >> id[totalStudents];

    cin.ignore();
    cout << "Enter Student Name: ";
    getline(cin, name[totalStudents]);

    cout << "Enter Age: ";
    cin >> age[totalStudents];

    cout << "Enter Marks: ";
    cin >> marks[totalStudents];

    totalStudents++;

    cout << "Student added successfully!\n";
}

// Function to display students
void displayStudents() {
    if (totalStudents == 0) {
        cout << "No records found!\n";
        return;
    }

    cout << "\n----- Student Records -----\n";
    for (int i = 0; i < totalStudents; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "ID    : " << id[i] << endl;
        cout << "Name  : " << name[i] << endl;
        cout << "Age   : " << age[i] << endl;
        cout << "Marks : " << marks[i] << endl;
    }
}

// Function to search student
void searchStudent() {
    if (totalStudents == 0) {
        cout << "No records found!\n";
        return;
    }

    int searchId;
    cout << "Enter Student ID to search: ";
    cin >> searchId;

    bool found = false;

    for (int i = 0; i < totalStudents; i++) {
        if (id[i] == searchId) {
            cout << "\nStudent Found\n";
            cout << "ID    : " << id[i] << endl;
            cout << "Name  : " << name[i] << endl;
            cout << "Age   : " << age[i] << endl;
            cout << "Marks : " << marks[i] << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Student not found!\n";
}

// Function to update student
void updateStudent() {
    int searchId;
    cout << "Enter Student ID to update: ";
    cin >> searchId;

    for (int i = 0; i < totalStudents; i++) {
        if (id[i] == searchId) {
            cin.ignore();
            cout << "Enter New Name: ";
            getline(cin, name[i]);

            cout << "Enter New Age: ";
            cin >> age[i];

            cout << "Enter New Marks: ";
            cin >> marks[i];

            cout << "Record updated successfully!\n";
            return;
        }
    }

    cout << "Student not found!\n";
}

// Function to delete student
void deleteStudent() {
    int searchId;
    cout << "Enter Student ID to delete: ";
    cin >> searchId;

    for (int i = 0; i < totalStudents; i++) {
        if (id[i] == searchId) {
            for (int j = i; j < totalStudents - 1; j++) {
                id[j] = id[j + 1];
                name[j] = name[j + 1];
                age[j] = age[j + 1];
                marks[j] = marks[j + 1];
            }

            totalStudents--;
            cout << "Record deleted successfully!\n";
            return;
        }
    }

    cout << "Student not found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== MINI STUDENT MANAGEMENT PROJECT =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                cout << "Thank You!\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}