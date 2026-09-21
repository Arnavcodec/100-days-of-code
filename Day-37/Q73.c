#include <stdio.h>

int main()
{
    int matrix[10][10], rowSum[10] = {0}, rows, cols, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    printf("Row sums:\n");
    for (i = 0; i < rows; i++)
    {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
