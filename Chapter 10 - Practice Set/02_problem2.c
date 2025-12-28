/* Write a program to generate multiplication table of a given number in text format.
   Make sure that the file is readable and well formatted. */

 #include <stdio.h>
 
 int main(){
    FILE *ptr;
    ptr = fopen("table.txt", "w");
    int num = 5;
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d", num*i);
        fprintf(ptr, "%c", '\n');
    }
    
    
    return 0;
 }




/* Write a C program to read an integer from a file and display its multiplication table on the screen. */
/* #include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("mynk.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of number for which you want table is %d\n", num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
} */