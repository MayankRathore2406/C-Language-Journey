#include <stdio.h>

int main()
{
    int x = 4;

    printf("%d %d %d \n", x, ++x, x++);
    /* output could be 6 6 4 (right to left) or 4 5 5 (left to right), it depends on compiler how it compiles the code
       so the answer is both*/

    // correct way to write the code for compiler
    // printf("%d\n", x);
    // printf("%d\n", ++x);
    // printf("%d\n", x++);

    return 0;
}