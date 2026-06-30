#include <stdio.h>

int main() 
{
    int age;

    printf("Welcome to the Voting Eligibility System!\n");
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) 
    {
        printf("✅ You are eligible to vote.\n");
    } else 
    {
        printf("❌ You are not eligible to vote. You must be at least 18 years old.\n");
    }

    return 0;
}
