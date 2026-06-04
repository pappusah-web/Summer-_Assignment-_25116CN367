// Write a program to Find nth Fibonacci term. 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n : ";
    cin>>n;

    int a = 0;
    int b = 1;
    int nextNUM ;

    for(int i = 1; i<=n ;i++){
        nextNUM = a+b;
        a = b;
        b = nextNUM;

    }

    cout<<"the "<<n<<"th fibonacci term is "<<nextNUM;

    return 0;
}