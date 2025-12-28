#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Mayank";
    printf("%d\n", strlen(st));

    char target[10];
    strcpy(target, st); // Target now contains harry
    printf("%s %s\n", st, target);

    char add1[20] = "Mayank Rathore";
    char add2[20] = " is a good guy";
    strcat(add1, add2); // add1 now contains "Mayank Rathore is a good guy"
    printf("%s\n", add1);

    // strcmp works according to the ASCII Table
    int a1 = strcmp("far", "joke"); // Negative value
    int a2 = strcmp("joke", "far"); // Positive value
    printf("%d %d", a1, a2);

    return 0;
}