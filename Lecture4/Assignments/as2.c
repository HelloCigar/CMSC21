#include <stdio.h>
int main(void){
    int i;
    i = 1;
    //a
    while (i < 10) {
        printf("%d ", i);
        i += 2;
        }
    printf("\n");

    //b
    i = 1;
    for(; i < 10;){
       printf("%d ", i);
       i += 2;
    }
    printf("\n");

    //c
    i = 1;
    do{
       printf("%d ", i);
       i += 2;
    }while(i < 10);

    return 0;
}
