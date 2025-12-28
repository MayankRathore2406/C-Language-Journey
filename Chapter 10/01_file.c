#include <stdio.h>

int main()
{

    FILE *ptr;
    ptr = fopen("mayank.txt", "r");
    int num;

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);

    fclose(ptr);   // It is a good practice to close the file

    return 0;
}