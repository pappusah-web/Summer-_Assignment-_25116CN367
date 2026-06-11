// Write a program to Write function to find sum of two numbers. 

#include<iostream>
using namespace std;

int sum(int x, int y){
    int add; 
    add = x+y;
    return add;
}


int main()
{
    int a;
    cout<<"enter the nalue of a : ";
    cin>>a;

    int b;
    cout<<"enter the nalue of b : ";
    cin>>b;

    cout<<sum(a,b);
    return 0;
} 