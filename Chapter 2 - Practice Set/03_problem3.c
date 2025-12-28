/* Write a program to check whether a number is divisible by 97 or not. */
#include <stdio.h>

int main(){
    // int a = 29448; 
    int a = 10185; // This value is divisible by a
    printf("The value of a%97 is %d", a%97); // If we get remainder value 0 it means the value of a is divisible by 97

    return 0;
}