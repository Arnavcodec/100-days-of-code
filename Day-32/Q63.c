#include <stdio.h>

int main()
{
    int a[100], b[100], c[200], n1, n2, i;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for first array:\n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for second array:\n", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
        c[n1 + i] = b[i];
    }

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
