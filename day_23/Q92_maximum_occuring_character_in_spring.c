#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int freq[256] = {0};  
    int i, maxFreq = 0;
    char maxChar;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) 
    {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] > maxFreq) 
        {
            maxFreq = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: %c (occurs %d times)\n", maxChar, maxFreq);

    return 0;
}
