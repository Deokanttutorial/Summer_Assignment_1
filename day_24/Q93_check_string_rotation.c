#include <stdio.h>
#include <string.h>

int isRotation(char str1[], char str2[]) 
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) return 0;

    char temp[2 * len1 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    return strstr(temp, str2) != NULL;
}

int main() 
{
    char str1[] = "Microsoft";
    char str2[] = "Adobe";
    char str3[] = "Paytm";

    if (isRotation(str1, str2))
        printf("%s is a rotation of %s\n", str2, str1);
    else
        printf("%s is NOT a rotation of %s\n", str2, str1);

    if (isRotation(str1, str3))
        printf("%s is a rotation of %s\n", str3, str1);
    else
        printf("%s is NOT a rotation of %s\n", str3, str1);

    return 0;
}
