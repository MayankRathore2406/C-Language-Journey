/*  void show(struct employee e);  // function prototype
    Quick Quiz: Complete this show function to display the content of employee.  */

#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};
void show(struct employee e); // function prototype

void show(struct employee e)
{
    printf("code is %d, salary is %f, name is %s\n", e.code, e.salary, e.name);
}

int main()
{
    // struct employee e1;
    // e1.code = 45;
    // e1.salary = 55.66;
    // strcpy(e1.name, "Mayank");

    // show(e1);

    struct employee Mayank = {45, 55.66, "Mayank"};
    show(Mayank);

    return 0;
}