#include <stdio.h>

int main()
{
    char op;
    int a, b;

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    switch (op)
    {
        case '+':
            printf("Result = %d\n", a + b);
            break;
        case '-':
            printf("Result = %d\n", a - b);
            break;
        case '*':
            printf("Result = %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Error: Division by zero\n");
            break;
        case '%':
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Error: Modulo by zero\n");
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}
