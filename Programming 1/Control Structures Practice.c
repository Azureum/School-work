/******************************************************************************

Control Structures Guided Practice
A.  (Letter Grades)  
	Write a program that asks the user to enter an integer grade 
	and will print the corresponding letter grade.
B.  (Comparison)   
	Write a program that performs the following steps
	1.  user enters 2 integers
	2.  if the first # is less than the second, print the statement in words
	3.  If the second is less than the first, print the statement in words
	4.  If the numbers are equal, print the statement in words
C.  (Evenly Divisible)  
	Write a program that performs the following steps
	1.  User enters 2 integers
	2.  if the first is evenly divisible by the second, print the statement in words
	3.  If the first is not evenly divisible by the second, print the statement in words
D.  (Conversion from number to word)  
	Write a program that performs the following steps
	1.  User enters an integer
	2.  Use a switch statement to display the number in English
E.  (Calculation based on the first #)   
	Write a program that performs the following steps
	1.  User enters 5 integers
	2.  if the first # is negative, calculate and print the product of the numbers
	3.  if the first # is positive, calculate and print the sum of the numbers
	4.  if the first # is zero, calculate and print the quotient and remainder of the product by the sum.


*******************************************************************************/
#include <stdio.h>

int main()
{
    /*
    B.  (Comparison)   
	Write a program that performs the following steps
	1.  user enters 2 integers
	2.  if the first # is less than the second, print the statement in words
	3.  If the second is less than the first, print the statement in words
	4.  If the numbers are equal, print the statement in words */
	
	
	// declare variables
	int num1, num2;
	
	printf("Enter two integers seperated by a space: ");
	scanf("%i %i",&num1, &num2);
	
	
	// if statements comparing num1 and num2 variables
	if (num1 > num2)
	    printf("%i is bigger than %i\n", num1, num2);
	else if (num2 > num1)
	    printf("%i is bigger than %i\n", num2, num1);
	else
	    printf("%i is equal to %i \n", num1, num2);
	
	/*
	C.  (Evenly Divisible)  
	Write a program that performs the following steps
	1.  User enters 2 integers
	2.  if the first is evenly divisible by the second, print the statement in words
	3.  If the first is not evenly divisible by the second, print the statement in words */
	
	// declaring the variables a, b, rem
	int a,b,rem;
	
	// Intializing the variables by taking the user inputs.
	printf("Input  two integers with a space between: ");
	scanf("%i %i",&a ,&b);
	rem = a%b;
	
	//  Calculations to find out if the numbers are evenly divisible or not.
	if (rem == 0)
	    printf("%i is evenly divisible by %i\n", a, b);
	else
	    printf("%i is not evenly divisible by %i\n", a, b);
	    
	    
	/*
	D.  (Conversion from number to word)  
	Write a program that performs the following steps
	1.  User enters an integer
	2.  Use a switch statement to display the number in English */
	
	
	// Declaring the X variable
	int x;
	
	// Intializing the X variable assigning the user input to it.
	printf("input one integer between 1-9: ");
	scanf("%i", &x);
	
	
	// This switches the integer of the x variable to its word form.
	switch(x) {
	    case 0: printf("Zero \n");
	        break;
	    case 1: printf("One \n");
	        break;
	    case 2: printf("Two \n");
	        break;
	    case 3: printf("Three \n");
	        break;
	    case 4: printf("Four \n");
	        break;
	    case 5: printf("Five \n");
	        break;
	    case 6: printf("Six \n");
	        break;
	    case 7: printf("Seven \n");
	        break;
	    case 8: printf("Eight \n");
	        break;
	    case 9: printf("Nine \n");
	        break;
	    default: printf("Invalid Entry \n");
	        break;
	}
	/* E.  (Calculation based on the first #)   
	Write a program that performs the following steps
	1.  User enters 5 integers
	2.  if the first # is negative, calculate and print the product of the numbers
	3.  if the first # is positive, calculate and print the sum of the numbers
	4.  if the first # is zero, calculate and print the quotient and remainder of the product by the sum.*/
	
	// declaring the variables n1, n2, n3, n4,  n5, product, sum.
	int n1, n2, n3, n4,  n5, product, sum;
	
	// Intialziing the variables giving them integer values.
	printf("Enter 5 integers with spaces between them: ");
	scanf("%i %i %i %i %i", &n1, &n2, &n3, &n4, &n5);
	
	// Calculations and variable intialization.
	sum = n1+n2+n3+n4+n5;
	product = n1*n2*n3*n4*n5;
	
	
	// If statements.
	if (n1>0)
	    printf("%i+%i+%i+%i+%i = %i\n", n1, n2, n3, n4, n5, sum);
	else if (n1<0)
	    printf("%i*%i*%i*%i*%i = %i\n", n1, n2, n3, n4, n5, product);
	else
	    printf("Remainder is 0, and quotient is zero. \n");
	    
	/* A.  (Letter Grades)  
	Write a program that asks the user to enter an integer grade 
	and will print the corresponding letter grade. */
	
	
	// Declaring the variable grade.
	int grade;
	
	// Assigning the an integer to the variable grade and intializing.
	printf("Input your number grade from 1-100 inclusive: ");
	scanf("%i", &grade);
	
	
	// Long version of if statements to print out a letter grade.
    if (grade >= 90 && grade <= 100)
        printf("A \n");
    if (grade >= 80 && grade < 90)
        printf("B \n");
    if (grade >= 70 && grade < 80)
        printf("C \n");
    if (grade >= 60 && grade < 70)
        printf("D \n");
    if (grade >= 50 && grade < 60)
        printf("F \n");
    if (grade >= 40 && grade < 50)
        printf("F \n");
    if (grade >= 30 && grade < 40)
        printf("F \n");
    if (grade >= 20 && grade < 30)
        printf("F \n");
    if (grade >= 10 && grade < 20)
        printf("F \n");
    if (grade >= 0 && grade < 10)
        printf("F \n");
	    
	    
	// Shorter version of printing a Letter grade.
	if (grade >= 90 && grade < 100)
	    printf("A \n");
	else if (grade >= 80)
	    printf("B \n");
	else if (grade >= 70)
	    printf("C \n");
	else if (grade >= 60)
	    printf("D \n");
	else
	    printf("F \n");
	
	
    return 0;
}
