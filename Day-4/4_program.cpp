// Write a program to Print Armstrong numbers in a range. 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cin >> start >> end;

    for (int num = start; num <= end; num++) {
        int temp = num, digits = 0, sum = 0;

        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}