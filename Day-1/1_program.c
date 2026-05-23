#include<stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int sum;
    sum=n*(n+1)/2;
    printf("%d",sum);
    return 0;
}