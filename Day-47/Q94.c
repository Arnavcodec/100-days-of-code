#include <stdio.h>

int main()
{
    char str[200], longest[100];
    int i = 0, len = 0, maxLen = 0, start = 0, bestStart = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            if (len == 0)
            {
                start = i;
            }
            len++;
        }
        else
        {
            if (len > maxLen)
            {
                maxLen = len;
                bestStart = start;
            }
            len = 0;
        }

        if (str[i] == '\0')
        {
            break;
        }
        i++;
    }

    for (i = 0; i < maxLen; i++)
    {
        longest[i] = str[bestStart + i];
    }
    longest[maxLen] = '\0';

    printf("Longest word: %s\n", longest);

    return 0;
}
