/******************************************************************************
 * Name: Matthew
 * Date: 10/25/23
 * Goal: Practice Nested Loops.
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
    int i,x,y;
    
    // Write a program to make a right angle triangle with the row# with 9 rows
    for(x = 1; x <=9; x++){
        for(i = 1; i<=x;i++){
            printf("%i ",x);
        }
        printf("\n");
    }
    printf("\n");
    
    // Write a program to make a right angle triangle with the numbers 1 to 10   
    i = 1;
    for(x = 1; x <=4; x++){
        for(y = 1; y<=x;y++){
            printf("%i ",i++);
        }
        printf("\n");
    }
    printf("\n");
    
    // Write a program to display the a table of values for the factorials 1 to 10
    y = 1;
    printf("Number  Factorial\n");
    for(x = 1;x <= 10; ++x){
            y = y * x;
            for(int i = 1;i <=x; ++i)
                {
                    if(x <= i){
                        printf("%i \t %i \n", x, y);
                    }
                }
        }
    return 0;
}
