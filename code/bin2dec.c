/******************************************************************************************
*Filename:           bin2dec.c
*Version:            1
*Author:             Mostapha A
*Course:             C Language CST8234
*Assignment Number:  1
*Assignment Name:    Lab 1: After Environment Setup; test your programming basics - Binary to Decimal
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
int main(void)
{
    /* declare var for input */
    int userNum;
    /* var for position value */
    int positions;
    /* var for number of digits */
    int count;
    /* var for temp values in calculation */
    int value;
    /* value for number at each position */
    int posVal;
    /* var for binary verification (default true) */
    int binary = 1;

    /* loop until 0 */
    do
    {
        /* prompt input */
        printf("Enter a binary number: ");

        /* store input */
        scanf("%d", &userNum);

        /* count how many digits */
        positions = 1;
        count = 1;
        value = userNum;
        do
        {
            /* check that it is comprised of 1s and 0s */
            if (((value % 10) != 1) && ((value % 10) != 0))
            {
                binary = 0;
            }
            value = (value / 10);
            positions = (positions * 2);
            count = count * 10;
        } while (value > 0);
        positions = (positions / 2);


        /* check if it is 0 otherwise calculate */
        if (userNum == 0)
        {
            /* do nothing, will exit */
        }
        else if (binary == 1)
        {
            /* if its a binary number loop to calculate*/
            posVal = userNum;
            value = 0;
            do
            {
                if ((posVal / (count / 10)) != 0)
                {
                    value = value + positions;
                    posVal = posVal - (count / 10);
                }
                positions = (positions / 2);
                count = (count / 10);
            } while (count > 1);
            /* print value */
            printf("The decimal equivalent of %d is %d\n", userNum, value);
        }
        else
        {
            /* otherwise ask for input again */
            printf("Invalid input. Try again \n");
        }

    } while (userNum != 0);
    /* return an int to satisfy non void main method - macro with value 0 */
    return EXIT_SUCCESS;
}