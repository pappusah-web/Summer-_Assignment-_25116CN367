#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the element of array : ";
    cin>>n;

    int arr[100];
    int actualsum = 0;
    cout<<"enter the element of array : ";
    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
        actualsum = actualsum + arr[i];
    }

    int expectedSum = 0;
    for(int i = 0; i <= n; i++){
        expectedSum = n*(n+1)/2;
    }
    cout<<"missing element is: "<<expectedSum-actualsum<<endl;
    
    return 0;
}
