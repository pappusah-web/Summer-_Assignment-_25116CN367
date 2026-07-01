#include <iostream>
using namespace std;

class Inventory {
    int id, quantity;
    string name;
    float price;

public:
    void addProduct() {
        cout << "Enter Product ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, name);

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;
    }

    void displayProduct() {
        cout << "\nProduct ID   : " << id;
        cout << "\nProduct Name : " << name;
        cout << "\nQuantity     : " << quantity;
        cout << "\nPrice        : " << price;
        cout << "\n---------------------------\n";
    }

    int getId() {
        return id;
    }

    void updateQuantity() {
        cout << "Enter New Quantity: ";
        cin >> quantity;
    }
};

int main() {
    Inventory item[100];
    int count = 0, choice, id, i;
    bool found;

    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display All Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            item[count].addProduct();
            count++;
            cout << "Product Added Successfully.\n";
            break;

        case 2:
            if (count == 0) {
                cout << "No Products Available.\n";
            } else {
                for (i = 0; i < count; i++)
                    item[i].displayProduct();
            }
            break;

        case 3:
            cout << "Enter Product ID to Search: ";
            cin >> id;
            found = false;

            for (i = 0; i < count; i++) {
                if (item[i].getId() == id) {
                    item[i].displayProduct();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Product Not Found.\n";
            break;

        case 4:
            cout << "Enter Product ID to Update Quantity: ";
            cin >> id;
            found = false;

            for (i = 0; i < count; i++) {
                if (item[i].getId() == id) {
                    item[i].updateQuantity();
                    cout << "Quantity Updated Successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Product Not Found.\n";
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}