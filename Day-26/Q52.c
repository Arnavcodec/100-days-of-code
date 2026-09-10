#include <stdio.h>

int main()
{
    int b, s, count;

    for (b = 1; b <= 5; b++)
    {
        if (b <= 3)
        {
            count = 2 * b - 1;
        }
        else
        {
            count = 2 * (6 - b) - 1;
        }

        for (s = 1; s <= count; s++)
        {
            printf("*\n");
        }

        if (b < 5)
        {
            printf("\n");
        }
    }

    return 0;
}
