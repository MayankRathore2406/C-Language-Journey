/* Write a program using recursion to calculate nth element of Fibonacci series. */

#include <stdio.h>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... --> fibonacci series

/*    1st element (n=1) → 0
      2nd element (n=2) → 1
From 3rd element onward → F(n) = F(n-1) + F(n-2)    */

int fibonacci(int);

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int a = 6;
    printf("The value of fibonacci series at %d is %d\n", a, fibonacci(a));
    return 0;
}