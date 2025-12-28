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

    struct employee facebook[100]; // an array of structures
    // we can access the data using:
    facebook[0].code = 100;
    facebook[1].code = 101;

    struct employee google[50];
    google[0].code = 50;
    google[1].code = 21;
    printf("%d %d\n", google[0].code, google[1].code);

    struct employee Mayank = {45, 88.99, "Mayank"};
    printf("%d %f %s\n", Mayank.code, Mayank.salary, Mayank.name);

    return 0;
}