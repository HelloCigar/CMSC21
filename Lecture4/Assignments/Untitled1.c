#include <stdio.h>
int main(void){
    int i=1;
    char ans;

    while(i==1){
    printf("Enter an integer: ");
        if (scanf("%d", &number)){
                printf("Roman Numeral: ");
            for(;number>=1000;number-=1000){
                printf("M");
            }
            for(;number>=900;number-=900){
                printf("CM");
            }
            for(;number>=500;number-=500){
                printf("D");
            }
            for(;number>=400;number-=400){
                printf("CD");
            }
            for(;number>=100;number-=100){
                printf("C");
            }
            for(;number>=90;number-=90){
                printf("XC");
            }
            for(;number>=50;number-=50){
                printf("L");
            }
            for(;number>=40;number-=40){
                printf("XL");
            }
            for(;number>=10;number-=10){
                printf("X");
            }
            for(;number>=9;number-=9){
                printf("IX");
            }
            for(;number>=5;number-=5){
                printf("V");
            }
            for(;number>=4;number-=4){
                printf("IV");
            }
            for(;number>=1;number-=1){
                printf("I");
            }
            i=0;}
        else{
            printf("Not an integer");
            printf("\nDo you want to continue using the program? Type Y for YES; N for NO: ");
            scanf("%s", &ans);
            if(ans == "N"){
                i=1;}
            else{
                i=0;
            }
    }
}
}
