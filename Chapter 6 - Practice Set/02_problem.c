/* Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address.
   Are these addresses same? Why?  */

#include <stdio.h>

void variable(int *);

void variable(int *x)
{
    printf("The address of i inside function is %p\n", x);
}

int main()
{

    int i = 20;

    printf("The address of i is %p\n", &i);
    variable(&i);

    // Both addresses are the same, because you passed the address of i (&i) to the function.
    // If you see different addresses, it means you passed i (value) instead of &i (address).

    return 0;
}
