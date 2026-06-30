#include <stdio.h>
#include <string.h>

struct Employee 
{
    int id;
    char name[50];
    char designation[50];
    float salary;
};

int main() 
{
    struct Employee emp[100];
    int count = 0, choice;

    do 
    {
        printf("\n--- Employee Management ---\n");
        printf("1. Add Employee\n2. Display Employees\n3. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            printf("Enter ID, Name, Designation, Salary: ");
            scanf("%d %s %s %f", &emp[count].id, emp[count].name,
                  emp[count].designation, &emp[count].salary);
            count++;
        } 
        else if (choice == 2) 
        {
            for (int i = 0; i < count; i++)
                printf("%d %s %s %.2f\n", emp[i].id, emp[i].name,
                       emp[i].designation, emp[i].salary);
        }
    } while (choice != 3);
    return 0;
}
