#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100];
    int choice;

    do 
    {
        printf("\n--- String Operations ---\n");
        printf("1. Length\n2. Reverse\n3. Compare\n4. Concatenate\n5. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            printf("Enter string: ");
            scanf("%s", str1);
            printf("Length: %lu\n", strlen(str1));
        } 
        else if (choice == 2) 
        {
            printf("Enter string: ");
            scanf("%s", str1);
            strrev(str1); 
            printf("Reversed: %s\n", str1);
        } 
        else if (choice == 3) 
        {
            printf("Enter two strings: ");
            scanf("%s %s", str1, str2);
            if (strcmp(str1, str2) == 0) printf("Equal\n");
            else printf("Not Equal\n");
        } 
        else if (choice == 4) 
        {
            printf("Enter two strings: ");
            scanf("%s %s", str1, str2);
            strcat(str1, str2);
            printf("Concatenated: %s\n", str1);
        }
    } 
    while (choice != 5);
    return 0;
}
