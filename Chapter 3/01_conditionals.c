#include <stdio.h>

int main()
{
    int age = 20;

    if (age > 25)
    {
        printf("You are greater than 25"); // This if statement will not execute till it is true statement as per condition
    }

    if (age < 25)
    {
        printf("You are not 25 yet");
    }

    return 0;
}