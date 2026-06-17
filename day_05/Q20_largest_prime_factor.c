#include<stdio.h>
int main()
{
    int n,i,j,a=2;
    printf("enter the composite number:");
    scanf("%d",&n);
    printf("factors: ");
     
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("%d",i);
            for(j=2;j<=i/2;j++)
            {
                if(i%j>0)
                a=i;
                else if(i==3)
                a=3;
            }
        }
    }
    printf("%d\nlargest prime factor : %d\n",n,a);
    return 0;
}