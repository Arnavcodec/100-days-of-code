#include <stdio.h>

int main()
{
    int matrix[10][10], rows, cols, i, j, s;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal:\n");
    for (s = 0; s < rows + cols - 1; s++)
    {
        for (i = 0; i < rows; i++)
        {
            j = s - i;
            if (j >= 0 && j < cols)
            {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
