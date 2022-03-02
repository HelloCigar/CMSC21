#include <stdio.h>

/* create a function that prints out 4 variables and their values,
specify their printed/converted form in the console using % character*/

int main(void){
    int i, j;
    float x, y;

    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    /*specify the format to be used for outputting to the console*/
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
    }
