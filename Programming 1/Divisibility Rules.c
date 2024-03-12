/******************************************************************************
 * Name: Matthew
 * Date: 10/3/23
 * Goal: To write a program to display the divisibility of a four digit number using the rules
 *       given by the assignment.
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
    /* Declares all 6 neccesary variables aswell as the flags and intializing them, 
    setting them to 0 for false */
    int number, first, second, third, fourth, temp;
    int flag_2 = 0, flag_3 = 0, flag_4 = 0, flag_5 = 0, flag_7 = 0, flag_9 = 0;
    
    // Following the rules of a positive number and being 4 digits.
    printf("Enter an integer which is a positive number & at most 4 digits: ");
    scanf("%i", &number);
    
    // This is how we'll break up the number into its individual digits.
    fourth = number % 10;
    temp = number / 10;
    third = temp % 10;
    temp = temp / 10;
    second = temp % 10;
    first = temp / 10;
    
    // The number is divisible by 2 if the last digit is even, the number is divisible by 2.
    if ((fourth % 2) == 0) {
        printf("%i is divisible by 2 \n", number);
        flag_2 = 1;
    }
    
    // The number is divisible by 3 If the sum of the digits is divisible by 3, the number is also.
    if ((fourth + third + second + first) % 3 == 0){
        printf("%i is divisible by 3 \n", number);
        flag_3 = 1;
    }
    
    /* The number is divisible by 4 If the last two digits form a number divisible by 4, 
    the number is also.*/
    if ((fourth+third*10) % 4 == 0) {
        printf("%i is divisible by 4 \n", number);
        flag_4 = 1;
    }
    
    // The number is divisible by 5 If the last digit is a 5 or a 0, the number is divisible by 5.
    if (fourth == 5 || fourth == 0){
        printf("%i is divisible by 5 \n", number);
        flag_5 = 1;
    }
    
    /*If the number is divisible by both 3 and 2, it is also 
    divisible by 6. */
    if (flag_2 == 1 && flag_3 == 1){
        printf("%i is divisible by 6 \n", number);
    }
    
    /* The number is divisible by 7 Take the last digit, double it, and subtract it from the 
    rest of the number; if the answer is divisible by 7 (including 0), then the number is also.*/
    if (((first*100 + second*10 + third) - fourth*2) % 7 == 0){
        printf("%i is divisible by 7 \n", number);
        flag_7 = 1;
    }
    
    /* The number is divisible by 8 If the last three digits form a number divisible by 8. 
    then so is the whole number.*/
    if ((second*100 + third*10 + fourth) % 8 == 0){
        printf("%i is divisible by 8 \n", number);
    }
    
    // The number is divisible by 9 If the sum of the digits is divisible by 9, the number is also.
    if ((fourth+third+second+first) % 9 ==0){
        printf("%i is divisible by 9 \n", number);
        flag_9 = 1;
    }
    
    // The number is divisible by 10 If the number ends in 0, it is divisible by 10.
    if (fourth == 0){
        printf("%i is divisible by 10 \n", number);
    }
    
    /* The number is divisible by 11 Alternately add and subtract the digits from left to right. 
    (You can think of the first digit as being 'added' to zero.)
    If the result (including 0) is divisible by 11, the number is also.
    Example: to see whether 365,167,484 is divisible by 11, start by adding to 0:
    0+3-6+5-1+6-7+4-8+4 = 0; therefore 365,167,484 is divisible by 11.*/
    if ((first - second + third - fourth) % 11 == 0){
        printf("%i is divisible by 11 \n", number);
    }
    
    /* The number is divisible by 12 If the number is divisible by both 3 and 4, it is also divisible
    by 12.*/
    if (flag_3 == 1 && flag_4 == 1){
        printf("%i is divisible by 12 \n", number);
    }
    
    /* The number is divisible by 13 Delete the last digit from the number, then subtract 9 times 
    the deleted digit from the remaining number. If what is left is divisible by 13,
    then so is the original number. */
    if (((first*100 + second*10 + third) - fourth*9) % 13 == 0){
        printf("%i is divisible by 13 \n", number);
    }
    
    // The number is divisible by 14 If the number passes the test for 2 and 7
    if (flag_7 == 1 && flag_2 == 1){
        printf("%i is divisible by 14 \n", number);
    }
    
    // The number is divisible by 15 If the number passes the test for 3 and 5
    if(flag_5 == 1 && flag_3 == 1){
        printf("%i is divisible by 15 \n", number);
    }
    
    // The number is divisible by 16 Divide the number in half 3 times and the result is even
    if ((first*1000 + second*100 + third*10 + fourth)%2 == 0) {
        temp = (first*1000 + second*100 + third*10 + fourth)/2;
        if (temp%2 == 0) {
            temp = temp/2;
            if (temp%2 == 0) {
                temp = temp/2;
                if (temp%2 == 0){
                    printf("%i is divisible by 16 \n", number);
                } 
            }
        }
    }
    
    /* The number is divisible by 17 Multiply the last digit by 5 and subtract it from the remaining number. 
    If the new number is divisible by 17 then the whole number is. */
    if((fourth*5 - (first*1000 + second*100 + third*10 + fourth)/10)%17 == 0){
        printf("%i is divisible by 17 \n", number);
    }
    
    // The number is divisible by 18 If the number passes the test for 2 and 9
    if(flag_2 == 1 && flag_9 ==1){
        printf("%i is divisible by 18 \n", number);
    }
    
    /*Add 2 times the last digit to the remaining number. 
    If the new number is divisible by 19 then the whole number is */
    if((((first*1000 + second*100 + third*10 + fourth)/10)+ (2*fourth)) % 19 == 0){
        printf("%i is divisible by 19 \n", number);
    }
    
    // The number is divisible by 20 If the tens digit is even and the number ends with 0
    if (third%2 == 0 && fourth == 0){
        printf("%i is divisible by 20 \n", number);
    }
    
    return 0;
}
