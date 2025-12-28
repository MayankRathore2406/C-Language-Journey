/*  Write a program to dynamically create an array of size 6 capable of storing 6 integers. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    ptr[0] = 22;
    ptr[1] = 76;
    ptr[2] = 88;
    ptr[3] = 11;

    printf("%d %d %d %d", ptr[0], ptr[1], ptr[2], ptr[3]);

    free(ptr);
    return 0;
}