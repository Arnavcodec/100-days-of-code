//rectangle lentgh and breadth is input and find its perimeter and area

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
    int area ,perimeter, L, B;

    printf("Enter the length :");
    scanf("%d", &L);
   
    printf("Enter the bredth :");
    scanf("%d", &B);

    area= L*B ;
    perimeter = 2*(L+B);

    printf("Area of rectangle is : %d", area);

    printf("\nPerimeter of rectangle is : %d", perimeter);


    return (0);
}