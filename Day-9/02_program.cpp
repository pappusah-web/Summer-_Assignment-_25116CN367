// Write a program to Print reverse number 
// triangle. 
 
// 12345 
// 1234 
// 123 
// 12 
// 1 

#include<iostream>
using namespace std;
int main()
{
    int n= 5;
    for(int i = 1; i <=5 ;i++){
        for(int j = 1; j<=n+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }


    return 0;
}

