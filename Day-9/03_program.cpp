// Write a program to Print repeated character 
// pattern. 
// A 
// BB 
// CCC 
// DDDD 
// EEEEE

#include<iostream>
using namespace std;
int main()
{
    int n = 5;

    for(int i = 1; i<=n;i++){
        for(int j = 1;j<=i;j++){
            int d = 64+i;
            char ch = char(d);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}
