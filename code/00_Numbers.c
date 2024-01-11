/******************************************************************************************
*Student Name:       Mostapha A
*Assignment Number:  1
*Assignment Name:    Lab 1: After Environment Setup; test your programming basics
*Course:             C Language CST8234
*Source Files:       00_Numbers.c pretty_phone.c bin2dec.c
******************************************************************************************/

/******************************************************************************************
*Filename:           00_Numbers.c
*Version:            1
*Author:             Mostapha A
*Course:             C Language CST8234
*Assignment Number:  1
*Assignment Name:    Lab 1: After Environment Setup; test your programming basics - Numbers
*Purpose:            Indicate each value from one to 100 that is a multiple of 3 and 5
******************************************************************************************/

/* include libraries needed */
#include <stdio.h>
#include <stdlib.h>

/* define the values */
#define MAX 100
#define MIN 1

/******************************************************************************************
*Function name:              main
*Purpose:                    Main function for the program
*Function In parameters:     None
*Function Out parameters:    An integer for function success
*Version:                    1
*Author:                     Mostapha A
******************************************************************************************/
int main(void) {
    /* declare a variable to change in loop */
    int i;

    /* loop to add to i and print its info */
    for (i = MIN; i <= MAX; i++){

        /* if i meets conditions print to screen */
        if (((i % 3) == 0) && ((i % 5) == 0)) {
            /* if its divisible by 3 and 5 with no remainder */
            printf("%d I'm multiple of 3 && 5!!!\n", i);
        } else if ((i % 3) == 0){
            /* if its divisible by 3 with no remainder */
            printf("%d I'm multiple of 3!!!\n", i);
        } else if ((i % 5) == 0){
            /* if its divisible by 5 with no remainder */
            printf("%d I'm multiple of 5!!!\n", i);
        } else {
            /* otherwise print just the number */
            printf("%d \n", i);
        }
    }
    /* return an int to satisfy non void main method - macro with value 0 */
    return EXIT_SUCCESS;
}