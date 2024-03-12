/******************************************************************************
 * Name: Matthew 
 * Date: 10/16/23
 * Goal:Write a program to perform the following using a for loop
 *	1.  display the natural numbers 1 to 10
 *	2.  display the even natural numbers 10 to 25
 *	3.  display the odd natural numbers  12 to 24
 *	4.  display the multiples of 3 from 1 to 100
 *	5.  display the multiples of 7 from 100 to 1
 *	6.  display the sum of the multiples of 4 from 1 to 100
 *	7.  display the product of the odd numbers 1 to 20
 *	8.  display the average of the multiples of 6 from 1 to 100
 *	9.  display the table containing the number, 3 times the number 
 *		and 5 times the number with column headings
 *  10.  ask the user for a number of values, 
 *  the user will enter the values and print the sum and the average
 *  
 *  
 *                      /^--^\     /^--^\     /^--^\
 *                      \____/     \____/     \____/
 *                     /      \   /      \   /      \
 *                    |        | |        | |        |
 *                     \__  __/   \__  __/   \__  __/
 *|^|^|^|^|^|^|^|^|^|^|^|^\ \^|^|^|^/ /^|^|^|^|^\ \^|^|^|^|^|^|^|^|^|^|^|^|
 *| | | | | | | | | | | | |\ \| | |/ /| | | | | | \ \ | | | | | | | | | | |
 *########################/ /######\ \###########/ /#######################
 *| | | | | | | | | | | | \/| | | | \/| | | | | |\/ | | | | | | | | | | | |
 *|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|
 * 
*******************************************************************************/
#include <stdio.h>

int main()
{
    // declaring variables
    int x, temp, temp2,temp3;
    
    // 1.  display the natural numbers 1 to 10
    printf("The natural numbers 1 to 10: ");
    for(x = 1; x <= 10; x++){
        printf("%i ",x);
    }
    printf("\n");
    
    // 2.  display the even natural numbers 10 to 25
    printf("The even natural numbers 10 to 25: ");
    for(x = 10; x <= 25; x+=2){
        printf("%i ",x);
    }
    printf("\n");
    
    // 3.  display the odd natural numbers  12 to 24
    printf("The odd natural numbers  12 to 24: ");
    for(x = 12; x <= 24; x++){
        if (x % 2 != 0){
            printf("%i ",x);
        }
    }
    printf("\n");
    
    // 4.  display the multiples of 3 from 1 to 40
    printf("The multiples of 3 from 1 to 40: ");
    for(x = 1; x <= 40; x++){
        if (x % 3 == 0){
            printf("%i ",x);
        }
    }
    printf("\n");
    
    // 5.  display the multiples of 7 from 40 to 1
    printf("The multiples of 7 from 40 to 1: ");
    for(x = 40; x >= 1; x--){
        if (x % 7 == 0){
            printf("%i ",x);
        }
    }
    printf("\n");
    
    // 6.  display the sum of the multiples of 4 from 1 to 50
    for(x = 1; x <= 50; x++){
        if (x % 4 == 0){
            temp += x;
        }
    }
    printf("The sum of the multiples of 4 from 1 to 100: %i\n", temp);
    
    // 7.  display the product of the odd numbers 1 to 15
    temp = 1;
    for(x = 1; x <= 15; x+=2){
        temp *= x;
    }
    printf("The product of the odd numbers 1 to 15: %i",temp);
    printf("\n");
    
    //8.  display the average of the multiples of 6 from 1 to 50
    temp = 0;
    for(x = 1; x <= 50; x++){
        if (x % 6 == 0){
            temp += x;
        }
    }
    printf("The average of the multiples of 6 from 1 to 50: %i \n",temp);
    
    // 9.  display the table containing the number, 3 times the number and 5 times the number with column headings
    printf("Number   3*Number   5*Number\n");
    for(x = 7; x <= 14; x++){
        printf("%3i", x);
        printf("%12i", x*3);
        printf("%10i", x*5);
        printf("\n");
    }
    printf("\n");
    
    //10.  ask the user for a number of values, the user will enter the values and print the sum and the average
    temp = 0;
    temp2 = 0;
    printf("Enter the #'s of values to add together: ");
    scanf("%i", &temp);
    printf("\n");
    for(x = 1; x <= temp; x++){
        printf("%i. ",x);
        scanf("%i",&temp2);
        temp3 = temp2+temp3;
    }
    printf("The sum of your numbers is %i\n",temp3);
    printf("The average of your numbers is %i.%i",temp3/(x-1),temp3%(x-1));
}
