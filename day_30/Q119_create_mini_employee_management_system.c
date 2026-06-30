#include <stdio.h>

struct Employee 
{
    char name[50];
    float salary;
};

int main() 
{
    struct Employee emps[2];
    int i;
    for(i=0; i<2; i++) 
    {
        printf("Enter name and salary for emp %d: ", i+1);
        scanf("%s %f", emps[i].name, &emps[i].salary);
    }
    printf("\nEmployees:\n");
    for(i=0; i<2; i++) 
    {
        printf("%s - $%.2f\n", emps[i].name, emps[i].salary);
    }
    return 0;
}