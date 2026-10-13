#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, sum, maxSum;

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

    maxSum = -999999;

    for (i = 0; i <= n - k; i++)
    {
        sum = 0;
        for (j = i; j < i + k; j++)
        {
            sum += arr[j];
        }

        if (i == 0 || sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("Maximum sum of subarray of size %d = %d\n", k, maxSum);

    return 0;
}
