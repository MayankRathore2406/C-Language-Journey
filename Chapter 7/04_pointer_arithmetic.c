#include <stdio.h>

int main()
{

    // Pointer Arithmetic using Integar Pointer
    // int a = 5;
    // int *ptr = &a;
    // printf("The address of a is %u\n", &a);
    // printf("The adress of a is %u\n", ptr);
    // ptr++;
    // printf("The value of ptr is %u\n", ptr);

    // Pointer Arithmetic using Character Pointer
    char a = 'A';
    char *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The adress of a is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);
  

    return 0;
}