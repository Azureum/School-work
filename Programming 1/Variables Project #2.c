/*********************************************************************************
 * Name: Matt
 * Date: 9/18/23
 * Goal: Create a program that uses 4 integer variables in order to calculate and print the expressions given.
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
 * *******************************************************************************/
 #include<stdio.h>     //C Library
 
 int main()
 {
    // Declaring and intializing four variables (a,b,c,answer).
    int a = 45, b = 5, c = 12, answer;
    
    // Calculations and outputs.
    
    // 1. a + b - c
    answer = a + b - c;
    printf("%i + %i - %i = %i\n",a,b,c,answer);
    
    // 2. (a+b)/c
    answer = (a+b)/c;
    printf("(%i + %i) / %i Quotient = %i\n",a,b,c,answer);
    answer = (a+b)%c;
    printf("(%i+%i)/%i Remainder = %i\n",a,b,c,answer);
    
    // 3. a(b+c)
    answer = a*(b+c);
    printf("%i * (%i+%i) = %i\n",a,b,c,answer);
    
    // 4. (a/b) + c
    answer = (a/b) + c;
    printf("%i / %i + %i = %i\n",a,b,c,answer);
    
    // 5. b(a-c)
    answer = b * (a-c);
    printf("%i * (%i-%i) = %i\n",b,a,c,answer);
    
    // 6. ab+c
    answer = a * b + c;
    printf("%i * %i + %i = %i\n",a,b,c,answer);
    
    // 7. 3a - 2c
    answer = 3*a - 2*c;
    printf("3 * %i - 2 * %i = %i\n",a,c,answer);
    
    // 8. a - 3b + 4c
    answer = a - 3*b + 4*c;
    printf("%i - 3 * %i + 4 * %i = %i\n",a,b,c,answer);
    
    // 9. -2a + b -3c
    answer = -2*a + b - 3*c;
    printf("-2*%i + %i  - 3*%i = %i\n",a,b,c,answer);
    
    // 10. -a + 4b + c
    answer = -a + 4*b + c;
    printf("-%i + 4*%i + %i = %i\n",a,b,c,answer);
    
    return 0;
 }
 
