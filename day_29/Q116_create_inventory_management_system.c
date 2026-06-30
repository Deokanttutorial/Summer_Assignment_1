#include <stdio.h>
#include <string.h>

struct Item 
{
    int id;
    char name[50];
    int qty;
    float price;
};

int main() 
{
    struct Item items[100];
    int count = 0, choice;

    do 
    {
        printf("\n--- Inventory System ---\n");
        printf("1. Add Item\n2. Update Stock\n3. Display Inventory\n4. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            printf("Enter ID, Name, Qty, Price: ");
            scanf("%d %s %d %f", &items[count].id, items[count].name,
                  &items[count].qty, &items[count].price);
            count++;
        } 
        else if (choice == 2) 
        {
            int id, qty;
            printf("Enter ID and new Qty: ");
            scanf("%d %d", &id, &qty);
            for (int i = 0; i < count; i++)
                if (items[i].id == id) items[i].qty = qty;
        } 
        else if (choice == 3) 
        {
            for (int i = 0; i < count; i++)
                printf("%d %s %d %.2f\n", items[i].id, items[i].name,
                       items[i].qty, items[i].price);
        }
    } 
    while (choice != 4);
    return 0;
}
