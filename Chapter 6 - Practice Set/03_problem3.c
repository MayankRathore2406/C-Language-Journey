/* Write a program to change the value of a variable to ten times of its current value. */

#include <stdio.h>

void change_ten_times(int *);

void change_ten_times(int *a)
{
    *a = *a * 10;
    printf("The value after making it ten times is %d", *a);
}

int main()
{
    int x = 10;

    printf("The value of x is %d\n", x);
    change_ten_times(&x);
    return 0;
}