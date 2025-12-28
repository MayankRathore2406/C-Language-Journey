#include <stdio.h>

int main()
{
    if (1)
    {
        printf("This if is executed\n");
    }

    if (23.9)
    {
        printf("This if is also executed\n");
    }

    if ('c')
    {
        printf("This character if is also executed\n");
    }

    if (0)
    {
        printf("I am zero - I am not executed");
    }
    return 0;
}