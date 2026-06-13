// Write a program to Find sum and average of array. 

#include<iostream>
using namespace std;

int sum(int arr[], int x){
    int add = 0;
    for(int i = 0; i < x; i++){
        add = add + arr[i];
    }
    return add;
}


int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;

    int arr[100];
    cout<<"enter the element of array : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int total = sum(arr,n);
    double average = double(total)/n;

    cout<<"the sum of array is "<<total<<endl;
    cout<<"the average of array is "<<average<<endl;

    return 0;
}