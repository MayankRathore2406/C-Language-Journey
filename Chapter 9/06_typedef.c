#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} Emp; // defined a datatype named as Emp

int main()
{

    // typedef int Mayank;  // created a int datatype named Mayank
    // Mayank a = 100;
    // printf("The value of a is %d", a);

    
    // struct employee e1;
    Emp e1; // same as struct employee e1
    Emp *ptr1 = &e1;
    strcpy(e1.name, "Mayank");
    e1.code = 45;
    e1.salary = 55.55;

    printf("%s %d %.2f\n", e1.name, e1.code, e1.salary);
    printf("%s %d %.2f", ptr1->name, ptr1->code, ptr1->salary);

    return 0;
}