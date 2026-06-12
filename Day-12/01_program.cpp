// Write a program to Write function for palindrome
#include<iostream>
using namespace std;

bool palindrome(int n) {
    int original = n;
    int reverse = 0;

    while (n != 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse) {
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

    if (palindrome(n)) {
        cout << n << " is a Palindrome Number";
    }
    else {
        cout << n << " is not a Palindrome Number";
    }

    return 0;
}