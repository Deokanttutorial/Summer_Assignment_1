#include <stdio.h>
#include <string.h>

void compressString(char str[]) 
{
    int n = strlen(str);
    int count = 1;

    for (int i = 0; i < n; i++) 
    {
        printf("%c", str[i]);

        while (i < n - 1 && str[i] == str[i + 1]) 
        {
            count++;
            i++;
        }

        if (count > 1) 
        {
            printf("%d", count);
        }

        count = 1;
    }
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Compressed string: ");
    compressString(str);

    return 0;
}
