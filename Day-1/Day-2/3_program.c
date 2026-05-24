#include<stdio.h>
int main()
{

    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int product= 1;
    int lastdigit = 0;
    while(n != 0){
        lastdigit = n%10;
        product = product*lastdigit;
         n = n/10;

    }
    printf("%d",product); 

    return 0;
}