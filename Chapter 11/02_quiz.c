/* Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc(). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    float *ptr;

    ptr = (float *)malloc(n * sizeof(float));

    ptr[0] = 2.32;
    ptr[1] = 3.23;
    ptr[2] = 4.32;
    ptr[3] = 9.88;
    ptr[4] = 10.22;

    printf("%.2f %.2f %.2f %.2f %.2f", ptr[0], ptr[1], ptr[2], ptr[3], ptr[4]);
    free(ptr);
    return 0;
}