#include <stdio.h>

int main() 
{
    int n, i, j, minIndex, temp;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++) 
    {
        minIndex = i;
        for(j = i + 1; j < n; j++) 
        {
            if(arr[j] < arr[minIndex]) 
            {
                minIndex = j;
            }
        }
         temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array (Selection Sort):\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
