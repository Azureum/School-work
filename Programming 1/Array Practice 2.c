/******************************************************************************
Name: Matthew
Arrays 1D - 
    use the slide show to complete the program below
_________________               _________________
 ~-.              \  |\___/|  /              .-~
     ~-.           \ / o o \ /           .-~
        >           \\  W  //           <
       /             /~---~\             \
      /_            |       |            _\
         ~-.        |       |        .-~
            ;        \     /        i
           /___      /\   /\      ___\
                ~-. /  \_/  \ .-~
                   V         V
*******************************************************************************/
#include <stdio.h>
void PrintIntegerArray(int A[])
{   //input: integer array with 10 elements
    //returned value: none
    //purpose: print the integer array with 10 elements across the page
    
    for(int index = 0;index < 10; index++){
        printf("%5i", A[index]);
    }
    printf("\n");
}
void PrintArray(int A[ ], int max)
{   //input: integer array A[], maximum number of elements to print
	//returned value: none
	//purpose: to print any integer array
	
	for(int index = 0;index < max; index++){
        printf("%5i", A[index]);
    }
    printf("\n");

}
void SumOfArray1(int A[ ], int max)
{	//input integer array A[], maximum number of elements
	//returned value: none
	//purpose: to add and print the elements any integer array
	int sum = 0;
    for(int i = 0; i < max; i++){
        sum+= A[i];
    }
    
    printf("The sum of the array is: %i\n",sum);
}
int SumOfArray2(int A[ ], int max)
{	//input integer array A[], maximum number of elements
	//returned value: the sum of the array elements
	//purpose: to add and return the sum of the elements any integer array
    int sum = 0;
    for(int i = 0; i < max; i++){
        sum+= A[i];
    }
    
    return(sum);
}
void UpdateIntegerArrayOne(int A[])
{   //input integer array with 10 elements
    //returned value none
    //purpose update the 10 element integer array with One
    
    for(int index = 0;index < 10; index++){
        A[index] = 1;
    }
    
    
}
void UserUpdateArray(int A[ ], int max)
{	//input integer array A[], maximum number of elements to print
	//returned value: none
	//purpose: to fill any integer array with user input
	
	for(int index = 0;index < 10; index++){
	    printf("Enter a number: ");
	    scanf("%i", &A[index]);
    }
}

int main()
{
    //declare variables
    
        //declare an integer array called numbers with 10 elements
        int numbers[10];
        //sum of the array
        //average of the array
    
    //print the unintialized array
    PrintIntegerArray(numbers);
    
    //update the array with ones
    UpdateIntegerArrayOne(numbers);
    
    //print the intialized array
    PrintIntegerArray(numbers);
    PrintArray(numbers, 5);
    
    //update the array by the user
    UserUpdateArray(numbers,10);
    
    //print the updated array
    PrintArray(numbers,10);
    
    //calculate and print the sum of the array
    SumOfArray1(numbers,10);
    printf("The sum of the second array is %i",SumOfArray2(numbers, 10));
    return 0;
}
