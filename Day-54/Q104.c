#include <stdio.h>

int main()
{
    int n, x, i, leftSum, rightSum, pivot = -1;

    printf("Enter positive integer n: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        leftSum = 0;
        for (i = 1; i <= x; i++)
        {
            leftSum += i;
        }

        rightSum = 0;
        for (i = x; i <= n; i++)
        {
            rightSum += i;
        }

        if (leftSum == rightSum)
        {
            pivot = x;
            break;
        }
    }

    printf("%d\n", pivot);

    return 0;
}
