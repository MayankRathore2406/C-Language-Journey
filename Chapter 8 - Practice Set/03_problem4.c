/* Write a function slice() to slice a string. It should change the original string such that it is now the sliced string.
Take ‘m’ and ‘n’ as the start and ending position for slice. */

#include <stdio.h>

void slice(char str[], int m, int n)
{
    int i = 0;
    while (m + i < n)
    {
        str[i] = str[m + i];
        i++;
    }
    str[i] = '\0';
    printf("%s", str);
}
int main()
{
    char string[] = "Mayank Rathore";

    slice(string, 0, 6);
    return 0;
}