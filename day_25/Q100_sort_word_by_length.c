#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str[200], words[50][50], temp[50];
    int n = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char *token = strtok(str, " \n");
    while (token != NULL) 
    {
        strcpy(words[n++], token);
        token = strtok(NULL, " \n");
    }

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (strlen(words[i]) > strlen(words[j])) 
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
