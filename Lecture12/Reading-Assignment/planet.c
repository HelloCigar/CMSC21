/* Checks planet names*/

#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

//main function, takes in the number of planets and array of planets(strings)
int main(int argc, char *argv[])
{   //initialize array of strings for planets
    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};
    //initialize variables for loops
    int i, j;
    //iterate to every string input
    for(i = 1; i < argc; i++){
        //iterate through every element in the planets array
        for(j = 0; j < NUM_PLANETS; j++){
            //compare current string input to every string in planets array
            if (strcmp(argv[i], planets[j]) == 0){ //if true, print the input as well as position, case-sensitive(uppercase/lowercase)
                printf("%s is a planet %d\n", argv[i], j + 1); //+1 to offset index and match real life position
                break; //break and continue to next input(if there's more)
            }
        if (j == NUM_PLANETS) //if no match was found on the planets array, print the input and notify as not a planet
            printf("%s is not a planet\n", argv[i]);
        }
    return 0; //return if success
    }
}
