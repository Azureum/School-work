/******************************************************************************
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
*******************************************************************************/
#include <stdio.h>
int main()
{
    float radius, diameter, area, circumference; // declaring the variable radius, diameter, area, circumference as a float.
    
    // defining pi as a constant.
    const float pi = 3.14159265;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius); // intializing the variable radius by taking the user's input.
    
    // Printing the top line.
    printf("-------------------------------------------------------------- \n");
    
    // Calculations of diameter, area, and circumference.
    diameter = radius * 2; // Diameter calculations.
    printf("The diameter is, %f \n", diameter);
    
    area = pi * (radius*radius); // Area of a circle calculations.
    printf("The area is, %f \n", area);
    
    circumference = pi * diameter; // Circumference of a circle calculations.
    printf("The circumference of the circle is, %f \n", circumference);
    
    // Printing a bottom line.
    printf("-------------------------------------------------------------- \n");
    
    return 0;
}
