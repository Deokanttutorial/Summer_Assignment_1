#include<stdio.h>

int main()
{

    int i, a = 0, b = 1, n ,c;
     printf("Enter number: ");
     scanf("%d" ,&n);

     if(n == 1)
    printf("%d", a);
else if(n == 2)
    printf("%d", b);
else{
    for(i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d", c);
}
     return 0;
}
