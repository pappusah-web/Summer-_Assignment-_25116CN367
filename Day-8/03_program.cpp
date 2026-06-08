#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int i = 1;
    while(i<=5){
        int j = 1;
        while(j<=i){
            int d = 64 + j;
            char ch = char(d);
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }


    return 0;
}