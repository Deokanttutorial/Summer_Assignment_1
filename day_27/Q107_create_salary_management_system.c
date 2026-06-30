#include <stdio.h>

struct Salary 
{
    int empId;
    float amount;
};

int main() 
{
    struct Salary s[100];
    int count = 0, choice;

    do 
    {
        printf("\n--- Salary Management ---\n");
        printf("1. Add Salary\n2. Display Salaries\n3. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            printf("Enter Employee ID and Salary: ");
            scanf("%d %f", &s[count].empId, &s[count].amount);
            count++;
        } 
        else if (choice == 2) 
        {
            for (int i = 0; i < count; i++)
                printf("EmpID: %d Salary: %.2f\n", s[i].empId, s[i].amount);
        }
    } 
    while (choice != 3);
    return 0;
}
