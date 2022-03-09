#include <stdio.h>

int main(void){
    int n, remainder, reversed; //3 variable for input, remainder, reversed
    printf("Please enter a two-digit number: ");
    scanf("%d",&n); //store input
    remainder = n%10; //calculate variable
    reversed = (remainder*10)+(n/10); // calculate the reverse
    printf("Reversed result: %d", reversed); //display reverse

}
