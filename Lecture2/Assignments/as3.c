#include <stdio.h>

int main(void){
    int i, j, k;
    i=3, j=4, k=5;
    printf("A:%d\n\n", i<j || ++j<k);
    i = 7; j = 8; k = 9;
    printf("B:%d\n\n",i - 7 && j++ < k);
    i = 7; j = 8; k = 9;
    printf("C1:%d\n", (i = j) || (j == k));
    printf("C2:%d %d %d\n\n", i, j, k);
    i = j = k = 1;
    printf("D1:%d\n", ++i || ++j && ++k);
    printf("D2:%d %d %d\n", i, j, k);
}
