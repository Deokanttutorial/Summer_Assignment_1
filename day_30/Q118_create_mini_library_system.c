#include <stdio.h>
#include <string.h>

struct Book 
{
    char title[50];
    int isAvailable;
};

int main() 
{
    struct Book books[2] = {{"Book1", 1}, {"Book2", 1}};
    int choice, b;
    while(1) 
    {
        printf("\n1. View Books\n2. Issue Book\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) 
        {
            for(int i=0; i<2; i++) printf("%d. %s - %s\n", i, books[i].title, books[i].isAvailable ? "Available" : "Issued");
        }
         else if (choice == 2) 
         {
            printf("Enter book index (0-1): ");
            scanf("%d", &b);
            if (b >= 0 && b < 2 && books[b].isAvailable) 
            {
                books[b].isAvailable = 0;
                printf("Issued!\n");
            } 
            else 
            {
                printf("Not available or invalid\n");
            }
        } 
        else if (choice == 3) break;
    }
    return 0;
}