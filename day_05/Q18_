#include<stdio.h>
int main()
{
    int i,originalnum,num,lastdigit,sum;
    long fact;
    printf("enter the number to check strong number:");
    scanf("%d",&num);

    originalnum = num;
    sum = 0;
     while(num > 0)
     {
        lastdigit = num % 10;
        fact = 1;

        for(i = 1; i <= lastdigit; i++)
        {
            fact = fact*i;
        }
        sum = sum + fact;
        num = num / 10;
     }
     if (sum == originalnum)
     {
        printf("%d is strong num",originalnum);
     }
     else
     {
        printf("%d is not strong number");
     }
     return 0;
}
