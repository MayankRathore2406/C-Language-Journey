#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d \n", i);

    i = i + 5;       // 10
    printf("The value of i is %d \n", i);

    printf("The value of i is %d \n", i++);  // 10
    printf("The value of i is %d \n", i);    // 11

    // i++ -->  Prints first then increments (Post Increment Operator)
    // ++i --> Increments first then print   (Pre Increment Operator)

    i += 2;  // same as i = i+2;
    printf("The value of i is %d \n", i);  // 13
    
    return 0;
}