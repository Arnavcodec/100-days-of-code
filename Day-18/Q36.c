#include <stdio.h>

int main()
{
    int a, b, n1, n2, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    n1 = a;
    n2 = b;

    while (n2 != 0)
    {
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }

    printf("GCD of %d and %d = %d\n", a, b, n1);

    return 0;
}
