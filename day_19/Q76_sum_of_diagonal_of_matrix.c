#include <stdio.h>

int main() 
{
    int n, i, j;
    
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int primarySum = 0, secondarySum = 0;

    for(i = 0; i < n; i++) 
    {
        primarySum += mat[i][i];          
        secondarySum += mat[i][n - i - 1]; 
    }

    printf("Sum of primary diagonal = %d\n", primarySum);
    printf("Sum of secondary diagonal = %d\n", secondarySum);
    printf("Total diagonal sum = %d\n", primarySum + secondarySum);

    return 0;
}
