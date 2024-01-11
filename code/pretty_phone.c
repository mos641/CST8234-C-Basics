/******************************************************************************************
*Filename:           pretty_phone.c
*Version:            1
*Author:             Mostapha A
*Course:             C Language CST8234
*Assignment Number:  1
*Assignment Name:    Lab 1: After Environment Setup; test your programming basics - Pretty Phone
*Purpose:            Take user input for a phone number and print it in a specific format
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

    /* loop until 0 */
    do
    {
        /* prompt input */
        printf("Enter a phone number: ");

        /* store input */
        scanf("%10d", &userNum);

        /* check if it is 0 or in range */
        if (userNum == 0)
        {
            /* do nothing, will exit */
        }
        else if (userNum > 9999999)
        {
            /* if its too large */
            printf("Invalid phone number: too many digits \n");
        }
        else if (userNum <= 1000000)
        {
            /* if it starts with 1 or too small */
            if (userNum == 1000000)
            {
                printf("Invalid central office code: 1\n");
            }
            else
            {
                printf("Invalid phone number: too few digits\n");
            }
        }
        else
        {
            /* if its a valid phone number */
            int num1, num2;
            /* find first three numbers and second four and print in format */
            num1 = (userNum / 10000);
            num2 = (userNum - (num1 * 10000));
            /* if second portion has no leading zeroes print as is, otherwise add 0s */
            if (num2 >= 1000)
            {
                printf("%d-%d\n", num1, num2);
            } else if (num2 >= 100 && num2 < 1000){
                printf("%d-0%d\n", num1, num2);
            } else if (num2 >= 10 && num2 < 100){
                printf("%d-00%d\n", num1, num2);
            } else if (num2 < 10){
                printf("%d-000%d\n", num1, num2);
            }
        }

    } while (userNum != 0);
    /* return an int to satisfy non void main method - macro with value 0 */
    return EXIT_SUCCESS;
}