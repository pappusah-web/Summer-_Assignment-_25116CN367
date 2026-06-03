#include<stdio.h>
int main()
{

    int n;
    printf("enter the number : ");
    scanf("%d",&n);

     int a=0;

    for(int i=2;i<=n-1;i++){
        if(n%i==0){
        a = 1 ;
        break;
    }
    }
    if(n==1 || n==0){
        printf("not prime");

    }
    else if ( a == 1) printf(" not prime");
    else  printf(" prime");


    return 0;
}