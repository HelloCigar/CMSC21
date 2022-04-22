#include <stdio.h>
#include <math.h>

int main(void){
    float input;
    printf("Enter a number: ");
    scanf("%f", &input);
    float x = input;
    float y = 1;
    float tol = 0.000001;
    while (x - y > tol) {
        x = (x + y) / 2;
        y = input / x;
    }
printf("Square root: %f", x);
}

