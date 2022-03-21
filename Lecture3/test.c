#include <stdio.h>s

int main(void){
    int num, ones, tens; char tens_str[10], ones_str[10];
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    printf("Number entered in words: ");

    ones = num%10; tens = num/10;

switch (ones){
    case 1:
        strcpy(ones_str, "one");break;
    case 2:
        strcpy(ones_str, "two");break;
    case 3:
        strcpy(ones_str, "three");break;
    case 4:
        strcpy(ones_str, "four");break;
    case 5:
        strcpy(ones_str, "five");break;
    case 6:
        strcpy(ones_str, "six");break;
    case 7:
        strcpy(ones_str, "seven");break;
    case 8:
        strcpy(ones_str, "eight");break;
    case 9:
        strcpy(ones_str, "nine");break;
    }

switch (tens){
    case 2:
        strcpy(tens_str, "twenty");break;
    case 3:
        strcpy(tens_str, "thirty");break;
    case 4:
        strcpy(tens_str, "forty");break;
    case 5:
        strcpy(tens_str, "fifty");break;
    case 6:
        strcpy(tens_str, "sixty");break;
    case 7:
        strcpy(tens_str, "seventy");break;
    case 8:
        strcpy(tens_str, "eighty");break;
    case 9:
        strcpy(tens_str, "ninety");break;
    }

if (num < 14 || num == 15){
    switch (ones){
        case 0:
            printf("ten");break;
        case 1:
            printf("eleven"); break;
        case 2:
            printf("twelve"); break;
        case 3:
            printf("thirteen");break;
        default:
            printf("fifteen");break;}
        }

else if(num >=14 && num <= 19){
    printf("%steen", ones_str);
    }

else{
    if(ones == 0){
        printf("%s", tens_str);}
    else{
    printf("%s-%s", tens_str, ones_str);}
    }

return 0;
    }

