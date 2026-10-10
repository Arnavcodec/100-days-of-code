#include <stdio.h>

int main()
{
    int arr[100], n, i, j, nextGreater;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        nextGreater = -1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                nextGreater = arr[j];
                break;
            }
        }

        printf("%d%s", nextGreater, (i == n - 1) ? "" : ", ");
    }
    printf("\n");

    return 0;
}
