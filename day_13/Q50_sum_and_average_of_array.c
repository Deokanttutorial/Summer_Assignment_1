#include <stdio.h>

int arraySum(int arr[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

float arrayAverage(int arr[], int n) 
{
    int sum = arraySum(arr, n);  
    return (float)sum / n;
}

int main() 
{
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int sum = arraySum(arr, n);
    float avg = arrayAverage(arr, n);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
