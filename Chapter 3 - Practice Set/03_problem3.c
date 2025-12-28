/*Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab       Tax
2.5 – 5.0L         5
5.0L - 10.0L       20
Above 10.0L        30
Note that there is no tax below 2.5L. Take income amount as an input from the user. */

#include <stdio.h>

int main()
{
    float income;
    printf("Type income here: \n");
    scanf("%f", &income);
    printf("You income is %f \n", income);

    if (income<=250000)
    {
        printf("Your tax is 0 \n");
    }

   else if (income<=500000) {
    printf("Your tax is %f \n", (income-250000)*0.05);
    }

    else if (income<=1000000) {
        printf("Your tax is %f \n", ((250000*0.05)+((income-500000)*0.20)));
    }

    else {
        printf("Your tax is %f \n", ((250000*0.05)+(500000*0.20)+((income-1000000)*0.30)));
    }
    
    return 0;
}