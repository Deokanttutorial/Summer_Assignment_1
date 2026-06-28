#include <stdio.h>

void removeSpaces(char str[]) 
{
    int i = 0, j = 0;

    while (str[i] != '\0') 
    {
        if (str[i] != ' ') 
        {  
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';  
}

int main() 
{
    char str[200];

    printf("Enter a string: ");
    scanf("%[^\n]", str);  

    removeSpaces(str);

    printf("String without spaces: %s\n", str);

    return 0;
}
