#include <stdio.h>

int main()
{
    // int a=1; int b=0;
    int a = 1;
    int b = 1;
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a and b is %d\n", a || b);
    printf("The value of not(b) is %d\n", !b); // !(NOT):- False --> True, True --> False

    if (a && b)
    {
        printf("both are true\n");
    }
    // is same as below code writing
    if (a)
    {
        if (b)
        {
            printf("both are true");
        }
    }
    return 0;
}

// 2 hr 30 mins