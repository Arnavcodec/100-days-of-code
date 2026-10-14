#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, maxVal;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0)
    {
        printf("Invalid window size\n");
        return 0;
    }

    for (i = 0; i <= n - k; i++)
    {
        maxVal = arr[i];
        for (j = i + 1; j < i + k; j++)
        {
            if (arr[j] > maxVal)
            {
                maxVal = arr[j];
            }
        }
        printf("%d ", maxVal);
    }
    printf("\n");

    return 0;
}
