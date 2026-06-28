#include <stdio.h>
#include <string.h>

#define CHAR_SIZE 256 

char firstNonRepeating(char *str) 
{
    int freq[CHAR_SIZE] = {0};
    int i;

    for (i = 0; str[i] != '\0'; i++) 
    {
        freq[(unsigned char)str[i]]++;
    }

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (freq[(unsigned char)str[i]] == 1) 
        {
            return str[i];
        }
    }

    return '\0'; 
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    char result = firstNonRepeating(str);

    if (result != '\0')
        printf("First non-repeating character: %c\n", result);
    else
        printf("No non-repeating character found.\n");

    return 0;
}
