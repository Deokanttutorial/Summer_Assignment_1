#include<stdio.h>
int main ()
{
    int n,rem,prod;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0);
    {
        rem=n%10;
        prod=prod*rem;
        n=n/10;
    }
    printf("product of number=%d",prod);
    return 0;
}