#include <stdio.h>

int factorial(int);

// factorial (5) = 5x4x3x2x1

int factorial(int n)
{
    // Base case --> to stop the recursion
    if (n == 1 || n == 0)
    {
        return 1;
    }

    // Recursive case --> function calls itself till hit the base case
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{

    int num;
    printf("Enter the number for which you want factorial\n");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));

    return 0;
}