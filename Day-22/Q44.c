#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0f;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            sum += 1.0f;
        }
        else
        {
            sum += (float)(2 * i - 1) / (2 * i);
        }
    }

    printf("Sum of series = %.4f\n", sum);

    return 0;
}
