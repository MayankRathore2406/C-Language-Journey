#include <stdio.h>

int main()
{

    char i = 'A';
    char *j = &i; // j is a character pointer

    printf("The address of i is %p\n", &i);

    float k = 7.65;
    printf("The adress of k is %p\n", &k);

    return 0;
}