#include <stdio.h>

int main()
{
    // Integar Arra
    int marks[90]; // Reserve space to store 90 integars

    marks[0] = 50;
    marks[1] = 65;
    // We can go all the way till marks[89]
    // Array index starts from zero
    printf("The value of marks 0 and marks 1 is %d , %d\n", marks[0], marks[1]);

    return 0;
}