#include <stdio.h>

int main()
{
    char s1[100], s2[100], temp[100];
    int len1 = 0, len2 = 0, i, j, k, isRotation = 0, match;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    while (s1[len1] != '\0')
    {
        len1++;
    }
    while (s2[len2] != '\0')
    {
        len2++;
    }

    if (len1 != len2)
    {
        printf("Not a rotation\n");
        return 0;
    }

    for (i = 0; i < len1; i++)
    {
        temp[i] = s1[i];
    }
    temp[len1] = '\0';

    for (k = 0; k < len1; k++)
    {
        match = 1;
        for (i = 0; i < len1; i++)
        {
            if (temp[i] != s2[i])
            {
                match = 0;
                break;
            }
        }
        if (match)
        {
            isRotation = 1;
            break;
        }

        char firstChar = temp[0];
        for (j = 0; j < len1 - 1; j++)
        {
            temp[j] = temp[j + 1];
        }
        temp[len1 - 1] = firstChar;
    }

    if (isRotation)
    {
        printf("Strings are rotations of each other\n");
    }
    else
    {
        printf("Strings are not rotations of each other\n");
    }

    return 0;
}
