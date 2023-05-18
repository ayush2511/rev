sum of diagonal mat
#include <stdio.h>
int main() 
{
    int m, n, i, j,mat[m][n],sum = 0;
    printf("Enter the number of rows m: ");
    scanf("%d", &m);
    printf("Enter the number of columns n: ");
    scanf("%d", &n);
    printf("Enter the matrix elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < m && i < n; i++) 
    {
        sum += mat[i][i];
    }
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}