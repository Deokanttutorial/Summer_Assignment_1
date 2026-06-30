#include <stdio.h>

int main() 
{
    char names[3][50];
    int marks[3];
    int i;
    for (i = 0; i < 3; i++) 
    {
        printf("Enter name for student %d: ", i+1);
        scanf("%s", names[i]);
        printf("Enter marks for student %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    printf("\nStudent Records:\n");
    for (i = 0; i < 3; i++) 
    {
        printf("%s: %d\n", names[i], marks[i]);
    }
    return 0;
}