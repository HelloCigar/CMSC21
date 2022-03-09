#include <stdio.h>

int main(void){
    int n, ones, tens, hundreds, reversed; //3 variable for input, remainder, reversed
    printf("Please enter a three-digit number: ");
    scanf("%d",&n); //store input

    ones = n%10;
    tens = ((n/10)%10);
    hundreds = n/100;
    reversed = (ones*100)+(tens*10)+hundreds; // calculate the reverse
    printf("Reversed result: %d", reversed); //display reverse
}
