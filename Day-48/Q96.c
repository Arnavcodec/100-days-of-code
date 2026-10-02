#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, start = 0, end, left, right, temp;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            start = i;
            while (str[i] != ' ' && str[i] != '\0')
            {
                i++;
            }
            end = i - 1;

            left = start;
            right = end;
            while (left < right)
            {
                temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }
        }
        else
        {
            i++;
        }
    }

    printf("Sentence with reversed words: %s\n", str);

    return 0;
}
