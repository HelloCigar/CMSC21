#include <stdio.h>
int main(void){
    printf("TABLE OF POWERS OF TWO\nn:   2 to the n:\n_    ___________\n");
    int p=1, n;
    for (n=1 ;n<=10; n++){
        p*=2;
        printf("%d       %d\n", n, p);
        }
    return 0;
}
