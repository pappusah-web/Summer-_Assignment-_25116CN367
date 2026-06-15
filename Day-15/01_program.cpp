// Write a program to Reverse array. 

#include<iostream>
using namespace std;

int reverse(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

void printArray(int arr[], int x){
    for(int i = 0; i < x; i++){
        cout << arr[i] <<" ";
    }
}

int main()
{
    int size;
    cout << "enter the size of array : ";
    cin >> size;

    int arr[100];
    cout << "enter the eklement of array :";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    reverse(arr,size);
    printArray(arr,size);

    return 0;
}