/* Write a program to calculate the factorial of a given number using a for loop. */

#include <stdio.h>

int main()
{
    printf("Enter the value for factorial\n");
    int n;
    scanf("%d", &n);

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("The factorial of %d is %d", n, fact);

    return 0;
}