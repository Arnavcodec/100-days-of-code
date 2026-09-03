#include <stdio.h>

int main()
{
    int a, b, n1, n2, temp, gcd, lcm;

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
    gcd = n1;

    if (gcd != 0)
    {
        lcm = (a * b) / gcd;
        if (lcm < 0)
        {
            lcm = -lcm;
        }
        printf("LCM of %d and %d = %d\n", a, b, lcm);
    }
    else
    {
        printf("LCM of 0 and 0 is 0\n");
    }

    return 0;
}
