#include <stdio.h>

int main()
{
    char name[100];
    int i, lastSpace = -1, len = 0;

    printf("Enter full name: ");
    scanf("%[^\n]", name);

    while (name[len] != '\0')
    {
        if (name[len] == ' ')
        {
            lastSpace = len;
        }
        len++;
    }

    if (lastSpace == -1)
    {
        printf("%s\n", name);
        return 0;
    }

    i = 0;
    while (name[i] == ' ')
    {
        i++;
    }

    if (i < lastSpace)
    {
        printf("%c. ", name[i]);
        i++;
    }

    while (i < lastSpace)
    {
        if (name[i - 1] == ' ' && name[i] != ' ')
        {
            printf("%c. ", name[i]);
        }
        i++;
    }

    for (i = lastSpace + 1; i < len; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");

    return 0;
}
