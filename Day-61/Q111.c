#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, firstNeg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0)
    {
        printf("Invalid window size\n");
        return 0;
    }

    for (i = 0; i <= n - k; i++)
    {
        firstNeg = 0;
        for (j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                firstNeg = arr[j];
                break;
            }
        }
        printf("%d ", firstNeg);
    }
    printf("\n");

    return 0;
}
