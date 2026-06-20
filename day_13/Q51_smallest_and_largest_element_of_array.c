#include <stdio.h>

int findLargest(int arr[], int n) 
{
    int max = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

int findSmallest(int arr[], int n) 
{
    int min = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < min) 
        {
            min = arr[i];
        }
    }
    return min;
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

    int largest = findLargest(arr, n);
    int smallest = findSmallest(arr, n);

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}
