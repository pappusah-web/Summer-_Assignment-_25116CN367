#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    int choice, n = 0, searchId;
    int bookId[MAX];
    string title[MAX], author[MAX];

    do {
        cout << "\n===== Mini Library System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (n < MAX) {
                cout << "Enter Book ID: ";
                cin >> bookId[n];

                cin.ignore();
                cout << "Enter Book Title: ";
                getline(cin, title[n]);

                cout << "Enter Author Name: ";
                getline(cin, author[n]);

                n++;
                cout << "Book added successfully.\n";
            } else {
                cout << "Library is full.\n";
            }
            break;

        case 2:
            if (n == 0) {
                cout << "No books available.\n";
            } else {
                cout << "\n===== Book List =====\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nBook " << i + 1 << endl;
                    cout << "Book ID : " << bookId[i] << endl;
                    cout << "Title   : " << title[i] << endl;
                    cout << "Author  : " << author[i] << endl;
                }
            }
            break;

        case 3:
            if (n == 0) {
                cout << "No books available.\n";
            } else {
                cout << "Enter Book ID to search: ";
                cin >> searchId;

                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (bookId[i] == searchId) {
                        cout << "\nBook Found\n";
                        cout << "Book ID : " << bookId[i] << endl;
                        cout << "Title   : " << title[i] << endl;
                        cout << "Author  : " << author[i] << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Book not found.\n";
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