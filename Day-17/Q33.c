#include <stdio.h>

int main()
{
    int num, temp, rem, count = 0, sum = 0, p, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("%d is not an Armstrong number\n", num);
        return 0;
    }

    temp = num;
    if (temp == 0)
    {
        count = 1;
    }
    else
    {
        while (temp != 0)
        {
            count++;
            temp /= 10;
        }
    }

    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        p = 1;
        for (i = 0; i < count; i++)
        {
            p = p * rem;
        }
        sum += p;
        temp /= 10;
    }

    if (sum == num)
    {
        printf("%d is an Armstrong number\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}
