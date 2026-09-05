#include <stdio.h>

int main()
{
    int num, first, last, temp, multiplier = 1, middle, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10 && num > -10)
    {
        printf("Swapped number = %d\n", num);
        return 0;
    }

    last = num % 10;
    temp = num;

    while (temp >= 10)
    {
        temp /= 10;
        multiplier *= 10;
    }
    first = temp;

    middle = (num % multiplier) / 10;
    swapped = (last * multiplier) + (middle * 10) + first;

    printf("Swapped number = %d\n", swapped);

    return 0;
}
