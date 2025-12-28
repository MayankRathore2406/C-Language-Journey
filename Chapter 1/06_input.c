#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");

    scanf("%d", &age); // Read integer from user
    // scanf("format_specifier", &variable_name);

    printf("Your age is: %d\n", age);
    return 0;
}
