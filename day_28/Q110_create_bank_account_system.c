#include <stdio.h>
#include <string.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main() 
{
    struct Account acc[100];
    int count = 0, choice;

    do {
        printf("\n--- Bank System ---\n");
        printf("1. Create Account\n2. Deposit\n3. Withdraw\n4. Display\n5. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            printf("Enter AccNo, Name, Balance: ");
            scanf("%d %s %f", &acc[count].accNo, acc[count].name, &acc[count].balance);
            count++;
        } 
        else if (choice == 2) 
        {
            int id; float amt;
            printf("Enter AccNo and amount: ");
            scanf("%d %f", &id, &amt);
            for (int i = 0; i < count; i++)
                if (acc[i].accNo == id) acc[i].balance += amt;
        } 
        else if (choice == 3) 
        {
            int id; float amt;
            printf("Enter AccNo and amount: ");
            scanf("%d %f", &id, &amt);
            for (int i = 0; i < count; i++)
                if (acc[i].accNo == id && acc[i].balance >= amt) acc[i].balance -= amt;
        } else if (choice == 4) 
        {
            for (int i = 0; i < count; i++)
                printf("%d %s %.2f\n", acc[i].accNo, acc[i].name, acc[i].balance);
        }
    } while (choice != 5);
    return 0;
}
