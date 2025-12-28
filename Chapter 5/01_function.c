#include <stdio.h>

// Function Prototype --> It is a good practice to write function prototype
int sum(int, int);

// Function Definition
int sum(int x, int y)
{
    printf("The sum is %d\n", x + y);
    return x + y;
}
int main()
{

    int a = 4, b = 3;
    int c = 3, d = 7;

    // int c = a+b;
    // printf("The sum is %d\n", c);

    sum(a, b); // Function Call
    sum(c, d); // Function Call
    sum(a, c); // Function Call

    int e = sum(a, b); // Function Call --> value stored in e
    printf("%d\n", e);

    return 0;
}