#include <stdio.h>

int main()
{
    int matrix[10][10], n, i, j, isDistinct = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (matrix[i][i] == matrix[j][j])
            {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
        {
            break;
        }
    }

    if (isDistinct)
    {
        printf("Diagonal elements are distinct\n");
    }
    else
    {
        printf("Diagonal elements are not distinct\n");
    }

    return 0;
}
