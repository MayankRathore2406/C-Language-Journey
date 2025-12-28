#include <stdio.h>

int main()
{

    char st[30];
    gets(st);

    printf("%s", st); // The entered string is stored in st!

    // puts(st); // Prints the string & places the cursor on the next line
    printf("Hey");
    return 0;
}