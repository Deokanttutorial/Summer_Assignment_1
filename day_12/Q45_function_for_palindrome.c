#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) 
{
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) 
    {
        if (str[start] != str[end]) 
        {
            return false; 
        }
        start++;
        end--;
    }
    return true; 
}

int main() 
{
    char str[100];

    printf("Enter a string or number: ");
    scanf("%s", str);

    if (isPalindrome(str))
        printf("%s is a Palindrome\n", str);
    else
        printf("%s is NOT a Palindrome\n", str);

    return 0;
}
