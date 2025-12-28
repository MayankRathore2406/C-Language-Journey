/* Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively. */

#include <stdio.h>

int main()
{
    int numbers[] = {2, 7, 9};

    int table[3][10];

    // Filling the tables
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j] = numbers[i] * (j + 1);
        }
    }

    // Printing the tables
    for (int i = 0; i < 3; i++)
    {
        printf("Table of %d: \n", numbers[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d\n", numbers[i], j + 1, table[i][j]);
        }
        printf("\n");
    }

    return 0;
}