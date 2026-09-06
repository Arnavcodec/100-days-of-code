#include <stdio.h>

int main()
{
    int num, temp, rem, i;
    long long sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0)
    {
        rem = temp % 10;
        fact = 1;
        for (i = 1; i <= rem; i++)
        {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }

    if (sum == num && num > 0)
    {
        printf("%d is a strong number\n", num);
    }
    else
    {
        printf("%d is not a strong number\n", num);
    }

    return 0;
}
