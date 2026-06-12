// Write a program to Write function for Armstrong. 
#include<iostream>
using namespace std;

bool armstrong(int n) {
    int original = n;
    int sum = 0;

    while (n != 0) {
        int digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if (sum == original) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (armstrong(n)) {
        cout << n << " is an Armstrong Number";
    }
    else {
        cout << n << " is not an Armstrong Number";
    }

    return 0;
}