#include <stdio.h>

int main() 
{
    int r, c, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int mat[r][c];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Row-wise sum:\n");
    for(i = 0; i < r; i++) 
    {
        int rowSum = 0;
        for(j = 0; j < c; j++) 
        {
            rowSum += mat[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }

    return 0;
}
