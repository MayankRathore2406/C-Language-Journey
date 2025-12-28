/* Quick Quiz: Modify the program above to check whether the file exists or not before opening the file. */

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("mayank.txt", "r");
    int num;

    if (ptr == NULL) // If there is no file it means it is NULL (used in c)
    {
        printf("The file doesn't exist, sorry!!");
    }

    else
    {
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);

        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);

        fclose(ptr);
    }

    return 0;
}