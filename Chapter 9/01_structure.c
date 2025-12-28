#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee e1, e2, e3;

    strcpy(e1.name, "Mayank");
    e1.salary = 44.22;
    e1.code = 101;

    printf("%s %f %d", e1.name, e1.salary, e1.code);

    return 0;
}