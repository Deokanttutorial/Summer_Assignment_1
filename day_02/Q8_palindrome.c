#include<stdio.h>
int main()
{
    int num,temp,rev=o,rem;
    printf("enter the number:");
    scanf("%d",&num);
    temp=num;
    while(num!=0);
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(temp==rev)
    {
        printf("%d is a palindrome number\n",num);
    }
    else
    {
        printf("%d is not a palindrome number\n",num);
    }
    return 0;
}