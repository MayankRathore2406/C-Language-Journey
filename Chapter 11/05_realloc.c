#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int *ptr;
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 3;
    ptr[1] = 2;

    printf("%d %d", ptr[0], ptr[1]);

    ptr = (int*) realloc(ptr, 10 * sizeof(int));

    return 0;
}