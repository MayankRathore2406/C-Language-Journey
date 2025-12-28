/* Write a program to print the address of a variable. Use this address to get the
   value of the variable. */
#include <stdio.h>

int main()
{

    int a = 100;
    int *address = &a;

    printf("The address of a is %p\n", address);
    printf("The value at address a is %d\n", *address);
    // printf("The address of a is %p\n", &a);
    // printf("The value at address a is %d\n", *(&a));

    return 0;
}