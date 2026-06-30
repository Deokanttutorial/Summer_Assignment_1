#include <stdio.h>

int main() 
{
    int arr[100], n = 0, choice;

    do 
    {
        printf("\n--- Array Operations ---\n");
        printf("1. Input Array\n2. Display\n3. Sort\n4. Reverse\n5. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            printf("Enter size: ");
            scanf("%d", &n);
            printf("Enter elements: ");
            for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        } 
        else if (choice == 2) 
        {
            for (int i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
        } 
        else if (choice == 3) 
        {
            for (int i = 0; i < n - 1; i++)
                for (int j = i + 1; j < n; j++)
                    if (arr[i] > arr[j]) 
                    {
                        int temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
                    }
        }
         else if (choice == 4) 
         {
            for (int i = 0; i < n / 2; i++) 
            {
                int temp = arr[i];
                arr[i] = arr[n - i - 1];
                arr[n - i - 1] = temp;
            }
        }
    }
     while (choice != 5);
    return 0;
}
