#include <stdio.h>

int main()
{
    int num, temp, rem, i;
    int freq[10] = {0};
    int maxFreq = 0, mostDigit = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;
    if (temp < 0)
    {
        temp = -temp;
    }
    if (temp == 0)
    {
        freq[0] = 1;
    }

    while (temp > 0)
    {
        rem = temp % 10;
        freq[rem]++;
        temp /= 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            mostDigit = i;
        }
    }

    printf("Most frequent digit: %d (occurs %d times)\n", mostDigit, maxFreq);

    return 0;
}
