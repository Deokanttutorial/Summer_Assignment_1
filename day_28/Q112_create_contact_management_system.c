#include <stdio.h>
#include <string.h>

struct Contact 
{
    char name[50];
    char phone[15];
};

int main() 
{
    struct Contact contacts[100];
    int count = 0, choice;

    do 
    {
        printf("\n--- Contact Management ---\n");
        printf("1. Add Contact\n2. Search Contact\n3. Display All\n4. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            printf("Enter Name and Phone: ");
            scanf("%s %s", contacts[count].name, contacts[count].phone);
            count++;
        } 
        else if (choice == 2) 
        {
            char search[50]; int found = 0;
            printf("Enter name to search: ");
            scanf("%s", search);
            for (int i = 0; i < count; i++)
                if (strcmp(contacts[i].name, search) == 0) 
                {
                    printf("Found: %s %s\n", contacts[i].name, contacts[i].phone);
                    found = 1;
                }
            if (!found) printf("Not found!\n");
        } else if (choice == 3) 
        {
            for (int i = 0; i < count; i++)
                printf("%s %s\n", contacts[i].name, contacts[i].phone);
        }
    } 
    while (choice != 4);
    return 0;
}
