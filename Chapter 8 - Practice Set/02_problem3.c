/* Write your own version of strlen function from <string.h> */

#include <stdio.h>
#include <string.h>

int mystrlen(char str[])
{
    int length = 0;
    int count;

    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}

int main()
{
    char name[100];

    printf("Enter you name: \n");
    gets(name);

    int len = mystrlen(name);

    printf("The length of string is: %d", len);

    return 0;
}