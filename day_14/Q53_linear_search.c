#include <stdio.h>

int linearSearch(int arr[], int n, int key) 
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == key) 
        {
            return i;  
        }
    }
    return -1;  
}

int main() 
{
    int arr[100], n, key, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    pos = linearSearch(arr, n, key);

    if (pos != -1) 
    {
        printf("Element %d found at position %d (index %d).\n", key, pos + 1, pos);
    } 
    else 
    {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
