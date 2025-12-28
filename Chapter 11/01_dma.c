#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    // int arr[n]; // it is not allowed in c

    int *ptr;
    ptr = (int *)malloc(n * sizeof(int)); // malloc provide null ptr but we want integar ptr that's why we used int

    ptr[0] = 3;
    ptr[1] = 4;
    ptr[2] = 8;
    ptr[3] = 2;

    printf("%d %d %d %d", ptr[0], ptr[1], ptr[2], ptr[3]);
    free(ptr);

    return 0;
}