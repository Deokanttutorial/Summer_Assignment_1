#include <stdio.h>

int main() 
{
    int marks[5], total = 0;
    float percent;
    char grade;

    printf("Enter marks of 5 subjects: ");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percent = total / 5.0;
    if (percent >= 90) grade = 'A';
    else if (percent >= 75) grade = 'B';
    else if (percent >= 50) grade = 'C';
    else grade = 'D';

    printf("Total: %d\nPercentage: %.2f\nGrade: %c\n", total, percent, grade);
    return 0;
}
