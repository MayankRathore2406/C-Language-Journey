#include <stdio.h>

int main()
{
    int i = 72;
    int *j = &i; // j is a pointer pointing to i (j is an integar pointer)
                 // address of (&)
                 // value at address *(&i)

    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);

    printf("The value at address j is %d\n", *(&i));
    printf("The value at address j is %d\n", *j);

    int k = 24;
    int *l = &k;
    printf("The address of k is %p\n", &k);
    printf("The value at address k is %d\n", *l);

    

    return 0;
}

// %p --> correct way and gives address in hexadecimal
// %u --> unsigned int