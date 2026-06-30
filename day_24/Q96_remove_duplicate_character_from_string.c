#include <stdio.h>
#include <string.h>

void removeDuplicates(char str[]) 
{
    int index = 0;               
    int freq[256] = {0};        
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (freq[(unsigned char)str[i]] == 0) 
        {
            str[index++] = str[i];  
            freq[(unsigned char)str[i]] = 1;
        }
    }
    str[index] = '\0';           
}

int main() 
{
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    removeDuplicates(str);

    printf("String after removing duplicates: %s\n", str);

    return 0;
}
