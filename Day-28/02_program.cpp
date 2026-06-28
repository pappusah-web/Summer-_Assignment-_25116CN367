// Write a program to Create bank account system. 
#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    string name;
    float balance;

public:
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNo;
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;
        cout << "Enter Amount to Deposit: ";
        cin >> amount;

        if (amount > 0)
        {
            balance += amount;
            cout << "Amount Deposited Successfully.\n";
        }
        else
        {
            cout << "Invalid Amount.\n";
        }
    }

    void withdraw()
    {
        float amount;
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        if (amount > balance)
        {
            cout << "Insufficient Balance.\n";
        }
        else
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully.\n";
        }
    }

    void checkBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }

    void displayAccount()
    {
        cout << "\n----- Account Details -----\n";
        cout << "Account Number : " << accountNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    account.createAccount();

    int choice;

    do
    {
        cout << "\n===== BANK ACCOUNT SYSTEM =====\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            account.deposit();
            break;

        case 2:
            account.withdraw();
            break;

        case 3:
            account.checkBalance();
            break;

        case 4:
            account.displayAccount();
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}