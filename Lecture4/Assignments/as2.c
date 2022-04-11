#include <stdio.h>
int main(void){
    int i;
    i = 10;
    //a
    while (i < 10) {
        printf("%d ", i);
        i += 2;
        }
    printf("\n");

    //b
    i = 10;
    for(; i < 10;){
       printf("%d ", i);
       i += 2;
    }
    printf("\n");

    //c
    i = 10;
    do{
       printf("%d ", i);
       i += 2;
    }while(i < 10);

    return 0;
}
