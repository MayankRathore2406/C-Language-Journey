/* Write a recursive function to calculate the sum of first ‘n’ natural numbers. */

#include <stdio.h>

int sum_natural(int);

int sum_natural(int n)

// sum_natural(n) = 1 + 2 + 3 + 4 + 5 + ... n-1 + n;
// sum_natural(n) = sum(n-1) + n;

{
    if (n == 1)
    {
        return 1;
    }
    else
    {

        return n + sum_natural(n - 1);
    }
}
int main()
{

    int nth = 5;
    printf("The sum first %d number is %d", nth, sum_natural(nth));

    return 0;
}