/* Write a program using function to find average of three numbers. */

#include <stdio.h>
float average(int, int, int);

float average(int x, int y, int z)
{
    return (x + y + z) / 3.0;
}

int main()
{
    int a = 20, b = 45, c = 20;
    float avg = average(a, b, c);
    printf("The average of a, b and c is %f\n", avg);
    return 0;
}