#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    ptr[0] = 3;
    ptr[1] = 2;

    printf("%d %d", ptr[0], ptr[1]);
    free(ptr);

    return 0;
}