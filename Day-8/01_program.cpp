#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of line : ";
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n+1-i){
            cout<<" "<<" ";
            j++;
        }    
        int k=1;
        while(k<=2*i-1){
            cout<<"*"<<" ";
            k++;
    }
        cout<<endl;
        i++;
    }
    return 0 ;
}