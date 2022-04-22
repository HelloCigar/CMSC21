#include <stdio.h>
int main(){
int row, column = 0;
int size = 0 ;
char cont = 'y';
    while(cont = "y"){
        printf("Enter square size:");
        scanf("%d", &size);
        for(row = 0 ;row < size ; row++){
            for(column = 0 ; column < size ;column++){
                if (row==0 || (row+1)==size || column==0 || (column+1)==size){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    printf("Print another square? Enter y or n: ");
    scanf("%s", &cont);
    if (cont == 'n'){
    break;
    }else if (cont != 'y'){
        printf("Not a valid choice. \n");
        printf("Print another square? Enter y/n: ");
        scanf("%s", &cont);
    }
    }
    return 0;
}
