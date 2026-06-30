#include <stdio.h>
#include <string.h>

struct Book 
{
    int id;
    char title[50];
    char author[50];
};

int main() 
{
    struct Book b[100];
    int count = 0, choice;

    do 
    {
        printf("\n--- Library System ---\n");
        printf("1. Add Book\n2. Display Books\n3. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            printf("Enter ID, Title, Author: ");
            scanf("%d %s %s", &b[count].id, b[count].title, b[count].author);
            count++;
        } 
        else if (choice == 2) 
        {
            for (int i = 0; i < count; i++)
                printf("%d %s %s\n", b[i].id, b[i].title, b[i].author);
        }
    } 
    while (choice != 3);
    return 0;
}
