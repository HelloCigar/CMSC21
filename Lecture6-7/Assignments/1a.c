#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway)/sizeof(pathway[0])))

int main(){
    //bool pathway[8] = {true, false, true, false, false, false, false, false};
    bool pathway[8] = {[0] = true, [2] = true}; //lets element 0 and 2 to true, others default to false
    //bool pathway[8] = {true, false, true};

    for (int i = 0; i < NUM_PATHWAYS; i++){
        if(pathway[i]){
            printf("pathway[%d] is open \n", i);
        }else{
            printf("pathway[%d] is close \n", i);}
    }
    return 0;

}

