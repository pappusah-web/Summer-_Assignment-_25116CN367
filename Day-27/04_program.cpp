// Write a program to Create marksheet generation system.
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll;
    string name;
    float m1, m2, m3, total, percentage;
    char grade;
};

int main()
{
    Student s;
    
    cout << "--- Marksheet Generation System ---\n";

    cout << "Enter Roll Number: ";
    cin >> s.roll;
    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, s.name);

    cout << "Enter Marks of Subject 1: ";
    cin >> s.m1;

    cout << "Enter Marks of Subject 2: ";
    cin >> s.m2;

    cout << "Enter Marks of Subject 3: ";
    cin >> s.m3;

    s.total = s.m1 + s.m2 + s.m3;
    s.percentage = s.total / 3;

    if (s.percentage >= 90)
        s.grade = 'A';
    else if (s.percentage >= 75)
        s.grade = 'B';
    else if (s.percentage >= 60)
        s.grade = 'C';
    else if (s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    cout << "\n------ Marksheet ------\n";
    cout << "Roll Number : " << s.roll << endl;
    cout << "Name        : " << s.name << endl;
    cout << "Subject 1   : " << s.m1 << endl;
    cout << "Subject 2   : " << s.m2 << endl;
    cout << "Subject 3   : " << s.m3 << endl;
    cout << "Total Marks : " << s.total << endl;
    cout << "Percentage  : " << s.percentage << "%" << endl;
    cout << "Grade       : " << s.grade << endl;

    return 0;
}