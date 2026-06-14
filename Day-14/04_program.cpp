// Write a program to Find duplicates in array. 
#include<iostream>
using namespace std;

int dublicate(int arr[], int x){
    for(int i = 0; i < x; i++){
        for(int j = i+1; j < x; j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"enter the size of array : "<<endl;
    cin >> n;

    int arr[100];
    cout<<"enter the element of array :-"<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int found = dublicate(arr,n);
    if(found != -1){
        cout<<"dublicate element is " <<found<<endl;
        }
        else{
            cout<<"dublicate element is not present ."<<endl;
        }

    return 0;
}