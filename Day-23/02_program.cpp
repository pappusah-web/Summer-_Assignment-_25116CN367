// Write a program to Find first repeating character.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};

    for (int i = 0; i < str.length(); i++) {
        freq[(int)str[i]]++;
    }

    for (int i = 0; i < str.length(); i++) {
        if (freq[(int)str[i]] > 1) {
            cout << "First repeating character: " << str[i];
            return 0;
        }
    }

    cout << "No repeating character found.";

    return 0;
}