#include <stdio.h>

int main()
{
    int num, n, i = 0, j;
    int bin[32];

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Binary = 0\n");
        return 0;
    }

    n = num;
    while (n > 0)
    {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary = ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", bin[j]);
    }
    printf("\n");

    return 0;
}
