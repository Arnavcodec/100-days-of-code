#include <stdio.h>

int main()
{
    float c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9.0f / 5.0f) + 32.0f;
    printf("Temperature in Fahrenheit = %.2f\n", f);

    return 0;
}
