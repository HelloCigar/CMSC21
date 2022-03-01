#include <stdio.h>

/* create a function that prints out values and using conversion specifier,
to show different output formating styles */
int main(void) {
    int i;
    float x;

    i = 40;
    x = 839.21f;

    /* d is used for decimal output. positive m value for justifying to right,
    negative for left. p value specifies the minimum # of digits*/
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

    /* f is used for floating point. e is used for exponential form of float. g is flexible
     as it allows optimal display between d or f*/
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    /* indicate successful run of the program by returning 0*/
    return 0;

}
