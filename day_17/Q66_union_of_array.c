#include <stdio.h>

int main() 
{
    int n1, n2, i, j, k = 0;
    
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int unionArr[n1 + n2];

    for(i = 0; i < n1; i++) 
    {
        unionArr[k++] = arr1[i];
    }

    for(i = 0; i < n2; i++) 
    {
        unionArr[k++] = arr2[i];
    }

    for(i = 0; i < k; i++) 
    {
        for(j = i + 1; j < k; ) 
        {
            if(unionArr[i] == unionArr[j]) 
            {
                for(int m = j; m < k - 1; m++) 
                {
                    unionArr[m] = unionArr[m + 1];
                }
                k--; 
            } else 
            {
                j++;
            }
        }
    }

    printf("Union of arrays:\n");
    for(i = 0; i < k; i++) 
    {
        printf("%d ", unionArr[i]);
    }

    return 0;
}
