/*  Write a program to print first ‘n’ natural number using do-while loop. 
Input:  4 
Output: 1 
        2 
        3 
        4     */

#include <stdio.h>

int main(){
    int n, i = 0;

    scanf("%d", &n);


    do
    {
        printf("%d \n", i);
        i++;
    }  while (i<=n);
    
    return 0;
}



