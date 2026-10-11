#include <stdio.h>

int main()
{
    int arr[100], n, i, j, prevGreater;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        prevGreater = -1;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                prevGreater = arr[j];
                break;
            }
        }

        printf("%d%s", prevGreater, (i == n - 1) ? "" : ", ");
    }
    printf("\n");

    return 0;
}
