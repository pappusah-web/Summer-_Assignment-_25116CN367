#include<iostream>
using namespace std;

int main()
{
    int n1, n2;

    cin >> n1;
    int arr1[100];

    for(int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cin >> n2;
    int arr2[100];

    for(int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    int merged[200];

    for(int i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    for(int i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }

    for(int i = 0; i < n1 + n2; i++)
    {
        cout << merged[i] << " ";
    }

    return 0;
}