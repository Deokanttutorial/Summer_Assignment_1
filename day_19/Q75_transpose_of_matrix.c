#include <stdio.h>

int main() 
{
    int r, c, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int mat[r][c], transpose[c][r];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            transpose[j][i] = mat[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for(i = 0; i < c; i++) 
    {
        for(j = 0; j < r; j++) 
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
