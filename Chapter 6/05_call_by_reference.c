#include <stdio.h>

int sum(int *, int *);

// sum should change the value of x
int sum(int *a, int *b)
{
    *a = 6; 
    return *a + *b;
}

int main()
{
    int x = 2;
    int y = 9;
    printf("The sum of x and y is %d\n", sum(&x, &y));
    printf("The value of x is %d", x);
    return 0;
}