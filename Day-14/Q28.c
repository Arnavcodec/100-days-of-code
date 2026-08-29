#include <stdio.h>

int main()
{
    int n, i;
    long long product = 1;
    int hasEven = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
    {
        product = product * i;
        hasEven = 1;
    }

    if (hasEven)
    {
        printf("Product of even numbers = %lld\n", product);
    }
    else
    {
        printf("No even numbers in range 1 to %d\n", n);
    }

    return 0;
}
