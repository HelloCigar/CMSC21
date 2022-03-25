#include <stdio.h>

int main(void){
    int num_days, day_start, spaces, dates;
    printf("Enter number of days in month: ");
    scanf("%d", &num_days);
    printf("Enter the starting day of the week(1=Sun, 7=Sat): ");
    scanf("%d", &day_start);

    printf("\nSun|Mon|Tue|Wed|Thu|Fri|Sat|\n");

    if((num_days>27 && num_days <32) && (day_start >0 && day_start<8)){
        for(spaces=1;spaces<day_start; spaces++){
            printf("    ");
        }
        for(dates=1; dates<=num_days; dates++){
            if ((dates+spaces)%7==1){
                if(dates<10){
                printf("  %d|\n", dates);
                }
                else{
                printf(" %d|\n", dates);}\
                }
            else{
                if(dates<10){
                    printf("  %d|", dates);
                    }
                else{
                    printf(" %d|", dates);}
                }}}
    else{
        printf("Wrong input!");}
    }
