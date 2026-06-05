// Write a program to Find largest prime factor. 

#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    long long largestPrimeFactor = -1;

    for (long long i = 2; i <= n; i++) {
        while (n % i == 0) {
            largestPrimeFactor = i;
            n /= i;
        }
    }

    cout << "Largest Prime Factor = " << largestPrimeFactor;

    return 0;
}