#include<iostream>
using namespace std;

int fact(int x){
    int product = 1;
    for(int i = 1; i<=x;i++){
        product = product*i;
    }
    return product;
}
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;

    cout<<"factorial of "<<n<<" is "<<fact(n);

    return 0;
}