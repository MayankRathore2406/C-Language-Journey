/*  Quick Quiz: Write a program to find grade of a student given his marks based on below: 
    90 – 100 => A 
    80 – 90 => B 
    70 – 80 => C 
    60 – 70 => D 
    50 – 60 => E 
      <50   => F  */

#include <stdio.h>

int main(){
    int marks = 70;

    if (marks>=90 && marks<=100)
    {
        printf("You have passed with grade A");
    }

    else if (marks>=80 && marks<=90) {
        printf("You with grade B");
    }

    else if (marks>=70 && marks<=80) {
        printf("You with grade C");
    }

    else if (marks>=60 && marks<=70) {
        printf("You with grade D");
    }
    else if (marks>=50 && marks<=60)
    {
        printf("you with grade E");
    }
    
    else  {
        printf("Failed");
    }
    

    return 0;
}