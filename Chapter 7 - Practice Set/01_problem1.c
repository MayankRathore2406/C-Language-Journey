/*  Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element
where ptr is a pointer pointing to the first element of the array. */

#include <stdio.h>

int main()
{
    int bus_no[] = {10, 21, 38, 2, 14, 77, 36, 1, 67, 90};

    int *ptr = bus_no;

    printf("%d\n", *ptr);
    printf("The value at address %u is %d", ptr + 2, *(ptr + 2));
    return 0;
}