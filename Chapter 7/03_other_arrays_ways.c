#include <stdio.h>

int main()
{

    int cgpa[] = {22, 33, 44};

    for (int i = 0; i < 3; i++)
    {
        printf("The value of marks at index %d is %d\n", i, cgpa[i]);
    }

    return 0;
}