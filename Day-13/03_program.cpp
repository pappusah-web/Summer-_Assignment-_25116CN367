// Write a program to Find largest and smallest element. 

#include<iostream>
#include<climits>
using namespace std;

int getMax(int arr[], int x){
    int max = INT_MIN;
    for(int i = 0; i < x; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int y){
    int min = INT_MAX;
    for(int i = 0; i < y; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int n;
    cout<<"enter the size of array : "<<endl;
    cin>>n;

    int arr[100];
    cout<<"enter the element of array  :- "<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout<<"Maximum value is "<<getMax(arr,n)<<endl;
    cout<<"Minimum value is "<<getMin(arr,n)<<endl;

    return 0;
}