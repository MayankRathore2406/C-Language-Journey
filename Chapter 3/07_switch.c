#include <stdio.h>

int main()
{
int a;
printf("Enter the value a: ");
scanf("%d", &a);
printf("The value of a is %d \n", a);

switch (a)
{
case 1:
    printf("You entered 1 \n");
break;

case 2:
    printf("You entered 2 \n");
break;

case 3:
    printf("You entered 3 \n");
break;

case 4:
    printf("You entered 4 \n");
break;

default:
    printf("Nothing Matched");
}

return 0;
}