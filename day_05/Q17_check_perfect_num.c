#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("enter the number:");
    scanf("%d",&num);

    if(num <= 0)
    {
        printf("%d is not a perfect number.\n",num);
    }
    for(i = 1; i <= num/2; i ++)
    {
        if(num % i == 0)
        {
            sum = sum +i;
        }
    }
    if(sum == num)
    {
        printf("%d is a perfect number.\n",num);
    }
    else
    {
        printf("%d is not a perfect number.\n",num);
    }
    return 0;
}
