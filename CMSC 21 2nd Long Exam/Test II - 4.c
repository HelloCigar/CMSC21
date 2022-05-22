#include<stdio.h>

int main(){
    //a.
    int arr[5] = {1, 2, 3, 4, 5};
    //b.
    int *ptr;
    //c.
    ptr = &arr[0];
    //d.
    for(int i=0; i<5; i++){
        printf("%d", *(ptr+i));
    }
    printf("\n");
    //e.
    for(int i=0; i<5; i++){
        printf("%d", *(arr+i));
    }
    //f.
    printf("\n%d, %d, %d, %d", arr[1], *arr+1, *(ptr+1), *ptr+1);

}

