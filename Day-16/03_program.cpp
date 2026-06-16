// Write a program to Find pair with given sum. 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array : "<<endl;
    cin>>n;

    int sum;
    cout<<"enter the sum of element : "<<endl;
    cin>>sum;

    int arr[100];
    cout<<"enter the element of array :-"<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i]+arr[j]==sum){
                cout<<arr[i]<<" "<<arr[j]<<" ";
                return 0;
            }

        }
    }
    return 0;
}