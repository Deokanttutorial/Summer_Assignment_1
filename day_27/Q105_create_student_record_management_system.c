#include <stdio.h>
#include <string.h>

struct Student 
{
    int id;
    char name[50];
    int age;
    float marks;
};

int main() 
{
    struct Student students[100];
    int count = 0, choice;

    do 
    {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n2. Display Students\n3. Search by ID\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            printf("Enter ID, Name, Age, Marks: ");
            scanf("%d %s %d %f", &students[count].id, students[count].name,
                  &students[count].age, &students[count].marks);
            count++;
        } 
        else if (choice == 2) 
        {
            for (int i = 0; i < count; i++) 
            {
                printf("%d %s %d %.2f\n", students[i].id, students[i].name,
                       students[i].age, students[i].marks);
            }
        } 
        else if (choice == 3) 
        {
            int id, found = 0;
            printf("Enter ID to search: ");
            scanf("%d", &id);
            for (int i = 0; i < count; i++) 
            {
                if (students[i].id == id) 
                {
                    printf("Found: %d %s %d %.2f\n", students[i].id,
                           students[i].name, students[i].age, students[i].marks);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("Student not found!\n");
        }
    } while (choice != 4);

    return 0;
}
