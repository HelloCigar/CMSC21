#include <stdio.h>

/*function for adding 2 fractions*/
int main(void) {
    int num1, denom1, num2, denom2, result_num, result_denom;

    /*ask the user for the 1st fraction, using "/" as seperator
    store into numerator and denominator variables*/
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    /*ask the user for the 2nd fraction, using "/" as seperator
    store into numerator and denominator variables*/
    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    /*calculate the numerator thru cross multiplication*/
    result_num = num1 * denom2 + num2 * denom1;
    /*calculate the denominator*/
    result_denom = denom1 * denom2;
    /*print out the result*/
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;

    }
