#include <stdio.h>

int main()
{
    char str[100];
    int freq[26] = {0};
    int i, found = 0;
    char repeatingChar = '\0';

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            freq[str[i] - 'a']++;
        }
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (freq[str[i] - 'a'] > 1)
            {
                repeatingChar = str[i];
                found = 1;
                break;
            }
        }
    }

    if (found)
    {
        printf("First repeating lowercase alphabet: %c\n", repeatingChar);
    }
    else
    {
        printf("No repeating lowercase alphabet found\n");
    }

    return 0;
}
