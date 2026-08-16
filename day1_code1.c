//Write a program to input two numbers and display their sum

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
     int a , b;
     printf("enter 1st number :");
     scanf("%d", &a);

     printf("enter 2nd number :");
     scanf("%d", &b);

     int c = a+b ;

     printf(" sum = %d", c);

    return (0);
}