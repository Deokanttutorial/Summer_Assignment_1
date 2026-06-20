#include <stdio.h>

void countEvenOdd(int arr[], int n, int *evenCount, int *oddCount) 
{
    *evenCount = 0;
    *oddCount = 0;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            (*evenCount)++;
        } else 
        {
            (*oddCount)++;
        }
    }
}

int main() 
{
    int arr[100], n, evenCount, oddCount;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    countEvenOdd(arr, n, &evenCount, &oddCount);

    printf("Number of even elements = %d\n", evenCount);
    printf("Number of odd elements = %d\n", oddCount);

    return 0;
}
