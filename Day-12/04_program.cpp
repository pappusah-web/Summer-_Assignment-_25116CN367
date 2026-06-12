// Write a program to Write function for perfect number. 
#include<iostream>
using namespace std;

bool perfect(int n) {
    int sum = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == n) {
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

    if (perfect(n)) {
        cout << n << " is a Perfect Number";
    }
    else {
        cout << n << " is not a Perfect Number";
    }

    return 0;
}