// Write a program to Find maximum frequency element.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxFreq = 0;
    int maxElement;

    for(int i = 0; i < n; i++){
        int count = 0;

        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count > maxFreq){
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    cout << "Maximum frequency element = " << maxElement << endl;
    cout << "Frequency = " << maxFreq << endl;

    return 0;
}