/* Write a program containing a function which reverses the array passed to it. */

#include <stdio.h>

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse_array(int arr[], int n)
{

    /* for  i from 0 to n/2
       arr[i] arr[n-i-1]
            */
    for (int i = 0; i < n / 2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    print_array(arr, 10);
    reverse_array(arr, 10);
    print_array(arr, 10);

    return 0;
}