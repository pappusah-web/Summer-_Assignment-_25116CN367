//Write a program to Generate Fibonacci series.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n :  ";
    cin>>n;

    cout<<"the febonacci series are as : ";

    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";

    int i = 1;
    while(i<=n){
        int nextNUM = a+b;
        cout<<nextNUM<<" ";
        a=b;
        b=nextNUM;
        i++;
    }
    return 0;
}