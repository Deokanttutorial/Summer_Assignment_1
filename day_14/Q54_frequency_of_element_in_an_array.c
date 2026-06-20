#include <stdio.h>

int frequency(int arr[], int n, int key) 
{
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == key) 
        {
            count++;
        }
    }
    return count;
}

int main() 
{
    int arr[100], n, key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find frequency: ");
    scanf("%d", &key);

    int freq = frequency(arr, n, key);

    if (freq > 0) 
    {
        printf("Element %d occurs %d times in the array.\n", key, freq);
    }
    else 
    {
        printf("Element %d does not occur in the array.\n", key);
    }

    return 0;
}
