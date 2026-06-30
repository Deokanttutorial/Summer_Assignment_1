#include <stdio.h>
#include <string.h>

struct Ticket 
{
    int seatNo;
    char name[50];
};

int main() 
{
    struct Ticket tickets[100];
    int count = 0, choice;

    do 
    {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. Book Ticket\n2. Cancel Ticket\n3. Display Tickets\n4. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            printf("Enter Seat No and Name: ");
            scanf("%d %s", &tickets[count].seatNo, tickets[count].name);
            count++;
        } 
        else if (choice == 2) 
        {
            int seat, found = 0;
            printf("Enter Seat No to cancel: ");
            scanf("%d", &seat);
            for (int i = 0; i < count; i++) 
            {
                if (tickets[i].seatNo == seat) 
                {
                    tickets[i] = tickets[count - 1];
                    count--;
                    found = 1;
                    printf("Ticket cancelled!\n");
                    break;
                }
            }
            if (!found) printf("Seat not found!\n");
        } 
        else if (choice == 3) 
        {
            for (int i = 0; i < count; i++)
                printf("Seat %d booked by %s\n", tickets[i].seatNo, tickets[i].name);
        }
    } while (choice != 4);
    return 0;
}
