// Write a program to Create contact management system.
#include <iostream>
#include <string>
using namespace std;

class Contact
{
private:
    string name;
    string phone;

public:
    void addContact()
    {
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Phone Number: ";
        getline(cin, phone);

        cout << "Contact Added Successfully!\n";
    }

    void displayContact()
    {
        cout << "\n----- Contact Details -----\n";
        cout << "Name         : " << name << endl;
        cout << "Phone Number : " << phone << endl;
    }

    void searchContact(string searchName)
    {
        if (name == searchName)
        {
            cout << "\nContact Found!\n";
            displayContact();
        }
        else
        {
            cout << "Contact Not Found!\n";
        }
    }
};

int main()
{
    Contact contact;
    int choice;
    string searchName;

    do
    {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contact\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            contact.addContact();
            break;

        case 2:
            contact.displayContact();
            break;

        case 3:
            cin.ignore();
            cout << "Enter Name to Search: ";
            getline(cin, searchName);
            contact.searchContact(searchName);
            break;

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}