// Write a program to Write function to check prime. 

#include<iostream>
using namespace std;

bool isPrime(int x){
        if(x <= 1){
        return 0;
    }
  for(int i = 2; i<x; i++){
    if(x%i==0)
    return 0;
  }
  return 1;
}

int main()
{
    int n;
    cout<<"enter the number  : ";
    cin>>n;

    int prime = isPrime(n);
    if(prime==0){
        cout<<"not prime."<<endl;
    }
    else
    cout<<"prime"<<endl;

    return 0;
}