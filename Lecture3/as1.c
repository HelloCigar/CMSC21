#include <stdio.h>

int main(void){
    int age;
    char teenager[20];
    printf("Enter age: ");
    scanf("%d", &age);
/*
    if(age >= 13){
        if(age <= 19){
            strcpy(teenager, "true");}
        else{
            strcpy(teenager, "false");}}
    else if(age < 13){
        strcpy(teenager, "false");}
*/

    if (age >= 13 && age <= 19){
        strcpy(teenager, "true");
        }
    else{
        strcpy(teenager, "false");
        }
    printf("is teenager: %s\n", teenager);

    return 0;
}
