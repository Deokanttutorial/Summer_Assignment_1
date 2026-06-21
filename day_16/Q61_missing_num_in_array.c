#include <stdio.h>

int main() 
{
    int n, i;
    int sum = 0, total;

    printf("Enter the value of n (array should contain numbers from 1 to n with one missing): ");
    scanf("%d", &n);

    int arr[n - 1];  

    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++) 
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;

    printf("Missing number is: %d\n", total - sum);

    return 0;
}
