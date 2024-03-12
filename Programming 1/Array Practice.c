/******************************************************************************

Name: Matthew
Date: Jan 11 2024, 1704998693
Ascii:
       !
       !
       ^
      / \
     /___\
    |=   =|
    |     |
    |     |
    |     |
    |     |
    |     |
    |     |
    |     |
    |     |
    |     |
   /|##!##|\
  / |##!##| \
 /  |##!##|  \
|  / ^ | ^ \  |
| /  ( | )  \ |
|/   ( | )   \|
    ((   ))
   ((  :  ))
   ((  :  ))
    ((   ))
     (( ))
      ( )
       .
       .
       .

*******************************************************************************/
#include <stdio.h>

int Mean(int D[]){
    // Purpose: Find the mean of the values in the inputed array.
    // Input: An array, (data)
    // Output: elements
    int elements = 0, sum = 0; 
    

    for(int n = 1; n <= 10; ++n){
        elements = elements + D[n];
    }
    
    for(int n = 1;n <= 10; ++n){
        sum = sum + n * D[n];
    }
    
    printf("mean: %g\n", (float)sum/elements);
    return(elements);
}
void Stars(int max){
    // Purpose: To print out a certain amount of stars following the int max
    // Input: an integer
    // Output: none
    for(int n = 1; n <= max; ++n){
        printf("*");
    }
    printf("\n");
}

void Histogram(int D[]){
    // Purpose: Creates a histogram, visualizing the values in the array using stars.
    // Input: an array (data)
    // Output: none
    for(int n = 1; n <=10; n++){
        printf("%2i: ",n);
        Stars(D[n]);
    }
}

void Median(int D[],int mid){
    // Purpose: Finds the median of the values in the array.
    // Input: middle number of the array, and an array( data )
    // Output: none
    int n = 1, sum = 0;
    while(sum < mid){
        sum = sum + D[n];
        ++n;
    }
    printf("median: %2i\n",n-1);
}

void Mode(int D[]){
    // Purpose: To find the mode of the values in the inputed array.
    // Input: An array ( data )
    // Output: none
    int big;
    big = D[1];
    
    for(int n = 1;n <=10; ++n){
        if(big < D[n]){
            big = D[n];
        }
    }
    printf("mode: ");
    for(int n = 1; n <= 10; ++n){
        if(D[n] == big){
            printf("%2i", n);
        }
    }
}

int main()
{
    // Creating the array data.
    int data[11] = {0,9,5,11,9,7,12,13,14,7,13};
    // Declaring the variable middle.
    int middle;
    
    //  Visualizes the data through a histogram
    Histogram(data);
    // intializes the variable middle.
    middle = Mean(data)/2;
    // Calls the Median function to find the Median and print it.
    Median(data,middle);
    // Calls the Mode function to find the mode and to print it.
    Mode(data);
    return 0;
}
