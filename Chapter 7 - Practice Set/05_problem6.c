/* Write a program containing functions which counts the number of positive integers in an array. */

#include <stdio.h>

int function(int arr[], int size)
{
    int no_of_positive = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            no_of_positive++;
        }
    }
    return no_of_positive;
}

int main()
{

    int arr[] = {2, 5, -8, -10, 11, 10, 11, -12, 100, -12, -15};
    int size = 11;

    printf("The number of positive integars is %d\n", function(arr, size));

    return 0;
}