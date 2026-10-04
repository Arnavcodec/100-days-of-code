#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0')
    {
        len++;
    }

    printf("Substrings:\n");
    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
