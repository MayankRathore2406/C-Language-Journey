/* Create a two-dimensional vector using structures in C. */

#include <stdio.h>

struct vector
{
    int i;
    int j;
};

int main()
{

    struct vector v = {3, 8};
    
    printf("The values of vector %d i and %d j", v.i, v.j);

    return 0;
}