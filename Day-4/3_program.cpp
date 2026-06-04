#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, digit, digits = 0;

    int sum = 0;

    cout<<"enter the number : ";
    cin >> n;
    temp = n;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}