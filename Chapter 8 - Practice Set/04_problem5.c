/* Write your own version of strcpy function from <string.h> */

#include <stdio.h>

int mystrlen(char str[])
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}

void mystrcpy(char target[], char source[])
{
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0';
}

int main()
{
    char source[] = "Mayank Rathore";
    char target[40];

    mystrcpy(target, source);
    printf("%s %s", source, target);
    return 0;
}