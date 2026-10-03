#include <stdio.h>

int main()
{
    char name[100];
    int i = 0;

    printf("Enter full name: ");
    scanf("%[^\n]", name);

    while (name[i] == ' ')
    {
        i++;
    }

    if (name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }

    while (name[i] != '\0')
    {
        if (name[i - 1] == ' ' && name[i] != ' ')
        {
            printf(". %c", name[i]);
        }
        i++;
    }
    printf(".\n");

    return 0;
}
