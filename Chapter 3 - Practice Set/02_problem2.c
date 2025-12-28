/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/

#include <stdio.h>

int main()
{

    int sub1, sub2, sub3;
    int total;

    printf("Marks of Sub1 \n");
    scanf("%d", &sub1);

    printf("Marks of Sub2 \n");
    scanf("%d", &sub2);

    printf("Marks of Sub3 \n");
    scanf("%d", &sub3);

    total = (sub1 + sub2 + sub3) / 3;
    
    printf("Your marks are %d, %d and %d \n", sub1, sub2, sub3);

    if (sub1 < 33 || sub2 < 33 || sub3 < 33)
    {
        printf("You are failed because of less marks");
    }

    else if (total < 40)
    {
        printf("You are failed because of less percentage");
    }

    return 0;
}