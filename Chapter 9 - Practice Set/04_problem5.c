/* Write a program with a structure representing a complex number. */

#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary;
} complex;

int main()
{
    complex c = {5, 7};
    printf("The complex number is %d + %di", c.real, c.imaginary);
    return 0;
}