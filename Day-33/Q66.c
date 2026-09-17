#include <stdio.h>

int main()
{
    int arr[100], n, i, val, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &val);

    pos = n;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > val)
        {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
