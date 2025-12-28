#include <stdio.h>

int main()
{

    char str[] = {'H', 'E', 'L', 'L', 'O', '\0'}; // '\0' = Null character --> use to end of a string
    printf("Firs character is %c \n", str[0]);

    char str2[] = "Hello"; // When we use "" , null char automatically get added in c programming

    for (int i = 0; i < 5; i++)
    {
        printf("%c", str2[i]);
    }

    return 0;
}