#include <stdio.h>

int secondLargest(int arr[], int n) 
{
    int first, second;

    if (n < 2) 
    {
        return -1;
    }

    first = second = -2147483648; 

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > first) 
        {
            second = first;
            first = arr[i];
        }
         else if (arr[i] > second && arr[i] != first) 
        {
            second = arr[i];
        }
    }

    if (second == -2147483648) 
    {
        return -1;
    }
    return second;
}

int main() {
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int result = secondLargest(arr, n);

    if (result == -1) 
    {
        printf("Second largest element does not exist.\n");
    } else {
        printf("Second largest element = %d\n", result);
    }

    return 0;
}
