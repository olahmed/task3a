/**
 ******************************************************************************
 * @file           : task3
 * @author         : ola ahmed
 * @brief          : Contains the functionality of my application
 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ******************* Global Variables Section Start ************** */

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Decleration Section Start ************* */

/* ********************** Global Decleration  Section End   ************ */

/* ********************** Sub-Program Declerations Section Start ******* */

/* ********************** Sub-Program Declerations Section End ******* */

/* ********************** Sub-Program Section Start ************* */
   int main()
{
    unsigned int  Number;
    unsigned int  ones;
    unsigned int  tens;
    unsigned int  huns;
    unsigned int  fact1 = 1 ;
    unsigned int  fact2 = 1 ;
    unsigned int  fact3 = 1 ;
    unsigned char counter;
    printf("enter the number: ");
    scanf("%d",&Number);
    ones=(Number % 10);
    tens=(Number / 10) % 10 ;
    huns= Number / 100 ;
    for (counter=1;counter<=ones;counter++)
        {
            fact1*=counter;
        }
    for (counter=1;counter<=tens;counter++)
        {
            fact2*=counter;
        }
    for (counter=1;counter<=huns;counter++)
        {
            fact3*=counter;
        }
    if((fact1+fact2+fact3)==Number)
    {
    printf("\n it is a strong number");
    }
    else
    {
    printf("\n it is not a strong number");
    }
    return 0;
}
/* ********************** Sub-Program Section End ************* */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      30jan2024           third task a
*/
