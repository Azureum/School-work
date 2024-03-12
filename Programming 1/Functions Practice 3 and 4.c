#include<stdio.h>

//Function 3 Definitions
int LargerOfTwo(void)
{     //Function 3
      //this function asks the user to enter 2 integers and returns the value of the larger one.
     //input: none
     //returned value: the larger of the 2 values entered by the user
    int number1, number2;
    
    printf("Enter your first number: ");
    scanf("%i", &number1);
    
    printf("Enter your second number: ");
    scanf("%i", &number2);
    
    if (number1 > number2){
        return number1;
    }
    else{
        return number2;
    }

}

//Function 4 Definitions
int EvenOrOdd(int num)
{    //this function takes an integer num and returns a 1 if num is even and a 0 if num is odd
     //input: number(num)
     //returned value:  1 if even, 0 if odd
    if (num % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }

}
int PowerOfTwo(int n)
{    //Function 4
     //the function that takes a positive integer num as an argument and returns the largest power of two greater than or equal to num.
     //input: num value
     //return value: the largest power of two greater than or equal to the num
     int returnPower = 2;
     
     while(returnPower < n){
        returnPower *= 2;
     }
     return returnPower;

    
}
int LargerOfThree(int a, int b, int c)
{    //Function 4
     //Write a C function that takes three integers as arguments and returns the value of the largest one.
     //intput: 3 integers to be compared
     //returned value:  the largest value of the 3 integers
     
    if ((a > b) && (a > c)){
        return a;
    } else if (b > c){
        return b;
    } else {
        return c;
    }
}
int TimeInSeconds(int h, int m, int s)
{     //function 4
      //this function takes hours(h), minutes(m) and seconds(s) as arguments and returns the number of seconds
      //input: hours(h), minutes(m) and seconds(s)
      //returned value:  total number of seconds
      int totalSeconds = 0;
      
      totalSeconds += (h * 3600);
      totalSeconds += (m * 60);
      totalSeconds += s;
      return totalSeconds;

}
int main()
{
    printf("The largest is %i\n", LargerOfTwo());
    printf("The largest power of two is %i \n", PowerOfTwo(25));
    printf("The largest is %i \n", LargerOfThree(45,67,12));
    printf("3 hours 14 minutes and 31 seconds is %i seconds\n", TimeInSeconds(3,14,31));
    printf("Even or Odd: %i \n", EvenOrOdd(19));
     printf("Even or Odd: %i \n", EvenOrOdd(20));
}
