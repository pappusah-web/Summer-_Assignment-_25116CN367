// Write a program to Input and display array. 

#include<iostream>
using namespace std;

void printArray(int arr[], int x){
    for(int i = 0; i < x; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
int arr[100];

int n;
cout<<"enter the size of array : ";
cin>>n;

cout<<"enter the element of array : ";
for(int i = 0; i < n; i++){
    cin >> arr[i];
}

printArray(arr,n);

    return 0;
}