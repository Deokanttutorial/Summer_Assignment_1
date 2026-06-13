#include<stdio.h>
#include<math.h>
int main()
{
    int first,last,i,j,isprime;
    printf("enter the first number ");
    scanf("%d",&first);
    printf("enter the last number ");
    scanf("%d",&last);
    printf("prime numbers between %d and %d are:\n",first,last);
    for(i=first;i<=last;i++)
    {
        if(i<2)
        continue;
        isprime=1;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime)
        printf("%d",i);
    }
    printf("\n");
    return 0;
}