/******************************************************************************

Name: Matthew
unix time: 1704858376
purpose: Create a program which takes in 60 random numbers between 0-100 inclusive 
and split them between numbers that are higher than the average and lower than the average.
ascii:
                              \\\\\\\
                            \\\\\\\\\\\\
                          \\\\\\\\\\\\\\\
  -----------,-|           |C>   // )\\\\|
           ,','|          /    || ,'/////|
---------,','  |         (,    ||   /////
         ||    |          \\  ||||//''''|
         ||    |           |||||||     _|
         ||    |______      `````\____/ \
         ||    |     ,|         _/_____/ \
         ||  ,'    ,' |        /          |
         ||,'    ,'   |       |         \  |
_________|/    ,'     |      /           | |
_____________,'      ,',_____|      |    | |
             |     ,','      |      |    | |
             |   ,','    ____|_____/    /  |
             | ,','  __/ |             /   |
_____________|','   ///_/-------------/   |
              |===========,'


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void UPDATEORIGINAL(int A[]){
    // Purpose:Loops through 0-59 and updates each number of the original array to a random number.
    // input: the original array
    // output: none
    for(int n = 0; n < 60; n++){
        A[n] = (rand() % 100) + 1;
    }
}

void PRINTARRAY(int A[], int max){
    // Purpose: Loops and goes through through the inputed array max amount of times and prints rows of twenty.
    // input: an array, an integer called max
    // output: none
    for(int n = 0; n < max; n++){
        if (n % 20 == 0){
            printf("\n%5i", A[n]);
        } else {
            printf("%5i", A[n]);
        }
    }
    printf("\n");
}

float CALCULATEAVERAGE(int A[]){
    // Purpose: To calculate the average of the original array
    // input: the original array
    // output: the average which is a float
    float avg = 0.0;
    for(int n = 0; n < 60; n++){
        avg += A[n];
    }
    return(avg/60);
}

int ABOVEORBELOWAVG(int ORIG[], int LESS[], int MORE[], float AVG){
    // Purpose: The purpose is to sort each number of the original array by checking if they are either above 
    // or below the average, and place them in their corresponding array.
    // input: original array, lower array, higher array, average
    // output: counterM
    int counterM = 0, counterL = 0;
    for(int x = 0; x < 60; x++){
        if(ORIG[x] > AVG){
            MORE[counterM] = ORIG[x];
            counterM +=1;
        } else {
            LESS[counterL] = ORIG[x];
            counterL+=1;
        }
    }
    return(counterM);
}


 


int main()
{
    // Step 1: Declaring 3 integer arrays
    int original[60];
    int above[40] = {0};
    int below[40] = {0};
    
    // Step 2: Uses the time to generate random numbers everytime of use
    srand(time(NULL));
    
    
    // Step 2: A function to update each value with a random number
    UPDATEORIGINAL(original);
    
    
    // Step 3: A function which prints out the first twenty numbers of the array.
    printf("Data");
    PRINTARRAY(original, 60);
    // Calculates the average of the original array and prints.
    float average = CALCULATEAVERAGE(original);
    printf("Average = %g\n",average);
    // Sorts the numbers of the original array into the above and below arrays
    // aswell as getting the size of the above array in order to see how many numbers to print.
    int aboveSize = ABOVEORBELOWAVG(original, below, above, average);
    
    // prints the above and below array.
    printf("Above");
    PRINTARRAY(above, aboveSize);
    printf("Below");
    PRINTARRAY(below, 60-aboveSize);
    
    return 0;
}

