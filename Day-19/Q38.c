#include <stdio.h>

int main()
{
    int num, temp, sum = 0, rem;

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
        sum += rem;
        temp /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
