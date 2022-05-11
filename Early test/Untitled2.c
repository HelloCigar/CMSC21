#include <stdio.h>

int main(void){
    #define Total 5
    int numbers[Total] = {};
    for(int i = 0; i<Total; i++){
    printf("Enter the number: ");
    scanf("%d", &numbers[i]);}

    for(int i = Total; i>0; i--){
        printf("%d ", numbers[i-1]);
    }
}
