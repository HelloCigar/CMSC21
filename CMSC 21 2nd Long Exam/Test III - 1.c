#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h>

//declare function prototypes;
void scan_word(int occurences[26]);
bool is_anagram(int occurrences1[26], int occurrences2[26]);

//declare global variables and arrays
int word, i, same = 1, occurences[26] = {0}, occurences1[26], occurences2[26];

char c;

int main(void){

    word = 1;
    printf("Enter first word: ");
    scan_word(occurences);
    word++;
    printf("Enter second word: ");
    scan_word(occurences);

    if(is_anagram(occurences1, occurences2)){
        printf("The words are anagrams.\n");
        return 0;
    }
    printf("The words are not anagrams.\n");
    return 0;
}

void scan_word(int occurences[26])
{
    //word represents either the 1st or second word
    while ((c = getchar()) != '\n'){
        if(isalpha(c)){
            if(word==1){
            occurences1[toupper(c) - 'A']++;
            }
            else if(word==2){
            occurences2[toupper(c) - 'A']++;
            }
        }
    }
}
//for checking the array values
bool is_anagram(int occurrences1[26], int occurrences2[26])
{   //compare each element in both arrays. if any are not equal, immediately return false
    for (i = 0; i < 26; i++) {
        if(occurences1[i] != occurrences2[i]){
            return false;
        }
    }
    return true;
}
