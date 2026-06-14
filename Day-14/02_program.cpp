// Write a program to Frequency of an element. 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int element;
    cout << "Enter the element whose frequency you want to find: ";
    cin >> element;

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            count++;
        }
    }

    cout << "Frequency of " << element << " is " << count;

    return 0;
}