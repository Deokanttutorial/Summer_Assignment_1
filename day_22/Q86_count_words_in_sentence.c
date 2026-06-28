#include <stdio.h>

int countWords(char str[]) 
{
    int i = 0, words = 0;
    int inWord = 0;  

    while (str[i] != '\0') 
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = 0; 
        } else 
        {
            if (inWord == 0) 
            {
                words++;  
                inWord = 1;
            }
        }
        i++;
    }
    return words;
}

int main() 
{
    char str[200];

    printf("Enter a sentence: ");
    scanf("%[^\n]", str); 

    int wordCount = countWords(str);
    printf("Number of words = %d\n", wordCount);

    return 0;
}
