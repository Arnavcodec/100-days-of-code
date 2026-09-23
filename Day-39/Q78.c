#include <stdio.h>

int main()
{
    int matrix[10][10], n, i, j, sum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (i == j)
            {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
