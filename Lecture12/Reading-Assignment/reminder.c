/* Prints a one-month reminder list */

#include<stdio.h>
#include <string.h>

#define MAX_REMIND 50 /* maximum number of reminders */
#define MSG_LEN 60   /* max length of reminder message */

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN+3]; //initiate multidimensional array; for every date/reminder, there's a string limit
    char day_str[3], msg_str[MSG_LEN+1]; //day_string stores date as a string, while msg_string stores the reminder string
    int day, i, j, num_remind = 0; //initiate variables
    for(;;){ // main loop; terminates when max reminders reached or 0 is entered for date
        if(num_remind == MAX_REMIND){
            printf ("--No space left --\n");
            break;
            }
        printf("Enter day and reminder: ");
        scanf("%2d" , &day); //extra whitespace as padding, so that both 1 digit and 2 digit numbers have equal number of characters
        if (day == 0)
            break;
        sprintf(day_str, "%2d", day); //stores date from buffer as string to day_string
        read_line(msg_str, MSG_LEN); //updates the empty message array with the input reminder/message from buffer

        //sorts the reminders array the moment a lesser date is inputted than the already stored dates
        for (i = 0; i < num_remind; i++) //compare current date to every date in the array
            if(strcmp(day_str, reminders[i]) < 0) //if any of the already stored dates is found to be larger than current input date, break loop
            break; // retain the value of i or index where the first date larger than the current input date is found
        for (j = num_remind; j > i; j--) //loop from the index of current input date[j] to the index of where the first date larger than the current input date is found[i]
            strcpy(reminders[j], reminders[j-1]);//copy date from 1 index to the left of the current input to itself,
                                                //copy date from 2 index to the left of the current input to the index last time[itself-1]
                                                //then this continues until index[i] is reached, sorting the array
                                                // ex: dates={1,2,3,1}, then -> {1,2,3,3}->{1,2,2,3}->{1,1,2,3}
        strcpy(reminders[i], day_str); //store each date-string per iteration to remainder array
        strcat(reminders[i], msg_str); //concatenate the message/reminder to the corresponding date in the array

        num_remind++;
    }
    printf("\nDay Reminder\n"); //prints every string stored in the reminder array
    for(i = 0; i < num_remind; i++)
        printf("%s\n", reminders[i]);

    return 0;
}
//copies every character from input to string array
int read_line(char str[], int n)
{
    int ch, i = 0;
    while((ch = getchar()) != '\n') //copy characters until a newline is found
        if (i < n)
            str[i++] = ch; //update string array with the copied character, before incrementing i
        str[i] = '\0'; //terminate the string with \0 if done
    return i; //return the number of character if there's need to
}
