#include <stdio.h>

int main()
{
    int nums[100], ans[100], n, i, j;
    long long prod;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++)
    {
        prod = 1;
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                prod *= nums[j];
            }
        }
        ans[i] = (int)prod;
    }

    printf("Answer array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ans[i]);
    }
    printf("\n");

    return 0;
}
