#include <stdio.h>

int main()
{
    int arr[100], n, i, j, leftSum, rightSum, pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        leftSum = 0;
        for (j = 0; j < i; j++)
        {
            leftSum += arr[j];
        }

        rightSum = 0;
        for (j = i + 1; j < n; j++)
        {
            rightSum += arr[j];
        }

        if (leftSum == rightSum)
        {
            pivot = i;
            break;
        }
    }

    printf("%d\n", pivot);

    return 0;
}
