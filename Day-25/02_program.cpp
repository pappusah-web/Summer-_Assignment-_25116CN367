// Write a program to Find common characters in strings. 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    getline(cin, str1);
    getline(cin, str2);

    cout << "Common characters: ";

    for (int i = 0; i < str1.length(); i++) {
        bool found = false;

        for (int j = 0; j < str2.length(); j++) {
            if (str1[i] == str2[j]) {
                found = true;
                break;
            }
        }

        bool duplicate = false;
        for (int k = 0; k < i; k++) {
            if (str1[i] == str1[k]) {
                duplicate = true;
                break;
            }
        }

        if (found && !duplicate) {
            cout << str1[i] << " ";
        }
    }

    return 0;
}