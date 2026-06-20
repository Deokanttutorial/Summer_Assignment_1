#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isArmstrong(int n) 
{
    int original = n;
    int digits = 0, sum = 0;

    int temp = n;
    while (temp > 0) 
    {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) 
    {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong Number\n", num);
    else
        printf("%d is NOT an Armstrong Number\n", num);

    return 0;
}
