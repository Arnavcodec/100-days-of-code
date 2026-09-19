#include <stdio.h>

int main()
{
    int arr[100], n, i, first, second;
    int hasSecond = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("At least two elements are required\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    first = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            hasSecond = 1;
            first = arr[i];
        }
        else if (arr[i] < first)
        {
            if (!hasSecond || arr[i] > second)
            {
                second = arr[i];
                hasSecond = 1;
            }
        }
    }

    if (!hasSecond)
    {
        printf("No second largest element exists\n");
    }
    else
    {
        printf("Second largest element = %d\n", second);
    }

    return 0;
}
