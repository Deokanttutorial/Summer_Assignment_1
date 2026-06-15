#include<stdio.h>
int main()
{
    int num,firstnum,lastnum,r,sum,temp;
    printf("enter the first number");
    scanf("%d",&firstnum);
    printf("enter the last number");
    scanf("%d",&lastnum);

    printf("armstrong number in given range are:");

    for(num = firstnum; num <= lastnum; num++);
    {
    temp=num;
    sum=0;

    while(temp != 0)
    {
        r = temp % 10;
        temp = temp / 10;
        sum = sum + (r * r * r);
    }
    if(sum == num)
    printf("%d",num);
    }
    printf("\n");
}