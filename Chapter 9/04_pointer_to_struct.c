#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name;
};

int main()
{

    struct employee e1;
    e1.code = 56;
    struct employee *ptr;
    ptr = &e1;

    // now we can print structure elements using:

    printf("%d\n", (*ptr).code);
    printf("%d\n", ptr->code); // Exactly same as (*ptr).code

    // here -> is known as the arrow operator.

    return 0;
}