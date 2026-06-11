// Write a program to Write function to find 
// maximum. 

#include<iostream>
using namespace std;

int compare(int x,int y){
    if(x>y){
       return x;
    }
    else
      return y;
}
int main()
{
int a;
cout<<"enter the value of a : ";
cin>>a;

int b;
cout<<"enter the value of b : ";
cin>>b;

cout<<compare(a,b)<< " is greater.";

    return 0;
}