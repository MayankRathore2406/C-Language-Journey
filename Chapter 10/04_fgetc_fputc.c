#include <stdio.h>

int main()
{

    FILE *ptr;

    // ptr = fopen("mayank.txt", "r");
    // char c = fgetc(ptr);
    // printf("%c", c);

    // ptr = fopen("mayank.txt", "w");
    ptr = fopen("mayank.txt", "a");
    fputc('c', ptr);
    return 0;
}