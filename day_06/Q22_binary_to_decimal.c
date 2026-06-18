#include<stdio.h>
int main()
{
    int n,r,ans=0,contri=1;
    printf("enter the binary number:");
    scanf("%d",&n);
     
    while(n>0)
    {
        r=n%10;
        if(r==1)
        ans=ans+contri;
        n=n/10;
        contri=contri*2;
    }
    printf("%d",ans);
    return 0;
}