#include <stdio.h>

int main()
{
    int num, temp, rem;
    long long product = 1;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    if (temp < 0)
    {
        temp = -temp;
    }

    while (temp != 0)
    {
        rem = temp % 10;
        if (rem % 2 != 0)
        {
            product *= rem;
            hasOdd = 1;
        }
        temp /= 10;
    }

    if (hasOdd)
    {
        printf("Product of odd digits = %lld\n", product);
    }
    else
    {
        printf("No odd digits found\n");
    }

    return 0;
}
