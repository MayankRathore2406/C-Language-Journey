#include <stdio.h>

typedef struct employee
{
    int salary;
    float score;
} Emp;

int main()
{
    Emp e1;
    Emp *ptr = &e1;

    (*ptr).salary = 45;
    (*ptr).score = 54.4;

    // ptr->salary = 45;
    // ptr->score = 54.4;

    printf("The value of salary is %d and the value of score is %.2f", ptr->salary, ptr->score);

    return 0;
}