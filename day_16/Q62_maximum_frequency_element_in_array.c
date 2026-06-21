#include <stdio.h>

int main() 
{
    int n, i, j;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int maxFreq = 0, element = arr[0];

    for(i = 0; i < n; i++) 
    {
        int count = 0;
        for(j = 0; j < n; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                count++;
            }
        }
        if(count > maxFreq) 
        {
            maxFreq = count;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency: %d (occurs %d times)\n", element, maxFreq);

    return 0;
}
