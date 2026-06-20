#include <stdio.h>

void findDuplicates(int arr[], int n) 
{
    int found = 0;

    printf("Duplicate elements in the array are:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                printf("%d\n", arr[i]);
                found = 1;
                break; 
            }
        }
    }

    if (!found) 
    {
        printf("No duplicates found.\n");
    }
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

    findDuplicates(arr, n);

    return 0;
}
