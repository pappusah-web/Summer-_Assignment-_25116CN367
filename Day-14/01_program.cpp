#include<iostream>
using namespace std;

bool search(int arr[], int x, int key){
    for(int i = 0; i < x; i++){
        if(arr[i]==key){
            return 1;
        }

    }
    return 0;
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
    int key;
    cout<<"enter the number you want to search : ";
    cin >> key;
    int found = search(arr,n,key);
    if(found){
        cout<<"key is present ";
    }
    else{
        cout<<"key is absent ";
    }

    return -0;
}