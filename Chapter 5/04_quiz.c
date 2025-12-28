/* Use the library function to calculate the area of a square with side a. */

#include <stdio.h>
#include <math.h>

int main(){
    int a = 6;

    printf("The are of square is %f", pow(a, 2));    // pow function return double data type
    return 0;
}