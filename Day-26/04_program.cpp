// Write a program to Create quiz application. 
#include <iostream>
using namespace std;

int main() {
    int score = 0, ans;

    cout << "Quiz Application\n";

    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. New Delhi\n3. Chennai\n4. Kolkata\n";
    cin >> ans;
    if (ans == 2) score++;

    cout << "\n2. Which language is used for object-oriented programming?\n";
    cout << "1. C++\n2. HTML\n3. CSS\n4. SQL\n";
    cin >> ans;
    if (ans == 1) score++;

    cout << "\n3. 5 + 7 = ?\n";
    cout << "1. 10\n2. 11\n3. 12\n4. 13\n";
    cin >> ans;
    if (ans == 3) score++;

    cout << "\nYour Score: " << score << "/3";

    return 0;
}