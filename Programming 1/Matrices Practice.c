/******************************************************************************

Matrices Practice
    -Declare three 5 X 5 matrices – A, B, C in the main()
    -Write a function to fill matrix A and B with random numbers between 1 and 10
    -Write a function to add matrix A and matrix B into matrix C
    -Write a function to subtract matrix A and matrix B into matrix C
    -Write a function to multiply a  matrix by a scalar 
    -Write a function print each matrix to verify the results
    -Write a function to calculate and print the results of each of the following statements
        using the matrices
        C = A + B
        C = 2A + 2B
        C = 3B – 2A

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Write a function to fill matrix A and B with random numbers between 1 and 10
void randomMatrix(int A[][5],int B[][5]){
    for(int i = 0; i <5; i++){
        for(int x = 0; x < 5; x++){
            A[i][x] = (rand() % 10) + 1;
            B[i][x] = (rand() % 10) + 1;
        }
    }
}

//Write a function to add matrix A and matrix B into matrix C
void addMatricies(int A[][5], int B[][5], int C[][5]) {
    for(int i = 0; i < 5; i++) {
        for(int x = 0; x < 5; x++) {
            C[i][x] = A[i][x] + B[i][x];
        }
    }
}
//Write a function to subtract matrix A and matrix B into matrix C
void subtractMatricies(int A[][5], int B[][5], int C[][5]){
    for(int i = 0; i < 5; i++) {
        for(int x = 0; x < 5; x++) {
            C[i][x] = B[i][x] - A[i][x];
        }
    }
}
//Write a function to multiply a  matrix by a scalar 
void matrixMultiplier(int A[][5], int scalar){
    for(int i = 0; i < 5; i++) {
        for(int x = 0; x < 5; x++) {
            A[i][x] *= scalar;
        }
    }
}

void printMatricies(int A[][5], int B[][5], int C[][5]) {
    printf("%9s %s %20s %s %20s %s\n", "", "Matrix A", "", "Matrix B","", "Matrix C");
    for (int i = 0; i < 5; i++) {
        for (int x = 0; x < 5; x++) {
            printf("%4d ", A[i][x]);
        }
        printf("%5s", "");
        for (int x = 0; x < 5; x++) {
            printf("%4d ", B[i][x]);
        }
        printf("%5s", "");
        for (int x = 0; x < 5; x++) {
            printf("%4d ", C[i][x]);
        }
        printf("\n");
    }
}

//Write a function to calculate and print the results of each of the following statements
//C = A + B
//C = 2A + 2B
//C = 3B – 2A

void verifyMatricies(int A[][5], int B[][5], int C[][5]){
    // First Testcase
    randomMatrix(A,B);
    addMatricies(A,B,C);
    printMatricies(A,B,C);
    
    // Second Testcase
    randomMatrix(A,B);
    matrixMultiplier(A, 2);
    matrixMultiplier(B, 2);
    addMatricies(A,B,C);
    printMatricies(A,B,C);
    
    // Third Testcase
    randomMatrix(A,B);
    matrixMultiplier(A, 2);
    matrixMultiplier(B, 3);
    subtractMatricies(A,B,C);
    printMatricies(A,B,C);
    
}



int main()
{
    srand(time(NULL)); // Randomize time.
    //Declare three 5 X 5 matrices – A, B, C
    int A[5][5] = {{0}};
    int B[5][5] = {{0}};
    int C[5][5] = {{0}};
    
    verifyMatricies(A,B,C);
    return 0;
}
