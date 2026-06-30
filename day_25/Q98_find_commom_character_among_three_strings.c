#include <stdio.h>
#include <string.h>

void findCommonChars(char str1[], char str2[], char str3[]) {
    int freq1[256] = {0}, freq2[256] = {0}, freq3[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++)
        freq1[(unsigned char)str1[i]] = 1;

    for (int i = 0; str2[i] != '\0'; i++)
        freq2[(unsigned char)str2[i]] = 1;

    for (int i = 0; str3[i] != '\0'; i++)
        freq3[(unsigned char)str3[i]] = 1;

    printf("Common characters: ");
    for (int i = 0; i < 256; i++) 
    {
        if (freq1[i] && freq2[i] && freq3[i]) 
        {
            printf("%c ", i);
        }
    }
    printf("\n");
}

int main() 
{
    char str1[] = "Microsoft";
    char str2[] = "Adobe";
    char str3[] = "Paytm";

    findCommonChars(str1, str2, str3);

    return 0;
}
