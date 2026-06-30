#include <stdio.h>

void showMenu() 
{
    printf("Mini Project Menu\n1. Do task A\n2. Do task B\n3. Exit\n");
}

int main() 
{
    int choice;
    while(1) 
    {
        showMenu();
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) printf("Task A done.\n");
        else if (choice == 2) printf("Task B done.\n");
        else if (choice == 3) break;
        else printf("Invalid choice.\n");
    }
    return 0;
}