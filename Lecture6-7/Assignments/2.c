#include <stdio.h>

//define macro int size
#define size 8
int main(){
    //create variables for nodes/points and the adjacency matrix
    char points[9][2] = {"", "A", "B", "C", "D", "E", "F", "G", "H"};
    int road_networks[size][size] = {{1, 1, 0, 0, 0, 1, 0, 0},
                                     {1, 1, 1, 0, 0, 0, 0, 0},
                                     {0, 1, 1, 0, 1, 1, 0, 0},
                                     {0, 0, 0, 1, 1, 0, 0, 0},
                                     {0, 0, 0, 1, 1, 0, 0, 0},
                                     {1, 0, 1, 0, 0, 1, 0, 0},
                                     {1, 0, 0, 1, 0, 0, 1, 0},
                                     {0, 0, 0, 0, 0, 1, 0, 1}};
    //print the letters in rows and columns
    printf("      A     B    [C]   [D]    E     F     G     H\n");
    for(int i=0; i<size; i++){
        switch(i){
        case 0:
            printf("A     ");
            break;
        case 1:
            printf("B     ");
            break;
        case 2:
            printf("[C]   ");
            break;
        case 3:
            printf("[D]   ");
            break;
        case 4:
            printf("E     ");
            break;
        case 5:
            printf("F     ");
            break;
        case 6:
            printf("G     ");
            break;
        case 7:
            printf("H     ");
            break;}
        //print the adjacency mattrix
        for(int j=0; j<size; j++){
            if(j==size-1){
                printf("%d     \n", road_networks[i][j]);
            }else{
            printf("%d     ", road_networks[i][j]);
            }
        }
    }
    //variable for the user choice of starting point
    int starting_point;
    printf("Which point are you located?: 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H");
    printf("\nAt point: ");
    scanf("%d", &starting_point);
    printf("Starting at point: %c\n", points[starting_point][2]);

    //let i = starting point
    int i=starting_point;
        for(int j=0;j<size;j++){ //iterate through all possible routes
            if(i==j){ //skip the route with the same letter
                continue;
                }
            else if(i==2 || i==3){//stop loop when at C or D
                break;
                }
            else if(road_networks[i][j]==1){//find the immediate route and change the value used for starting point
                printf("Now at point: %c\n", points[j][2]);
                i=j;
                }
            }
        printf("Arrived at point: %c charging station", points[i][2]);//print final destination
}
