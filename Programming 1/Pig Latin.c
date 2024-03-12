/******************************************************************************

Name: matt
Date: 2/16/24
Purpose: Create an app which translates a users text into the pig latin equivalant.
           __,---.__
        ,-'         `-.__
      &/           `._\ _\
      /               ''._
      |   ,             (")
      |__,'`-..--|__|--''

*******************************************************************************/
#include <stdio.h>



int StringCount(char S[]){
    //input: a string from the user
    //output: an integer which is either 0 or 1;
    //purpose: Count the letters of the word to make sure its less than or equal to 7 characters.
    int c = 0;
    
    while(S[c] != '\0'){
        c++;
    }
    if (c > 7) {
        printf("Word is above 7 characters.\n");
        return(0);
    } else {
        return(1);
    }
}

void Translator(char S[]){
    //input: a string from the user
    //output: none
    //purpose: Translate the users string into a string that contains the piglatin equivalant.
    printf("Your translated word is: ");
    char vowels[11] = "aeiouAEIOU";
    int vowel1 = 0;
    int vowel2 = 0;
    
    for(int i = 0; i <= 10; i ++){
        if (S[0] == vowels[i]){
            vowel1 = 1;
        }
        if (S[1] == vowels[i]){
            vowel2 = 1;
        }
    }
    
    if(vowel1 == 0 && vowel2 == 1){
        for(int x = 1; S[x] != '\0';x++){
            printf("%c",S[x]);
        }
        printf("%c",S[0]);
        printf("ay\n");
    }else if(vowel1 == 1 && vowel2 == 0){
        for(int x = 0;  S[x] != '\0' ;x++){
            printf("%c",S[x]);
        }
        printf("way\n");
    } else {
        for(int x = 2; S[x] != '\0';x++){
            printf("%c",S[x]);
        }
        printf("%c",S[0]);
        printf("%c",S[1]);
        printf("ay\n");
    }
}



int main()
{
    
    // Used piglatin rules from purdue: https://web.ics.purdue.edu/~morelanj/RAO/prepare2.html
    //Declares two variables and a string, 
    int check;
    //Intializes again at = 1 so it reruns the program by unless not wanted by the user.
    int again = 1;
    char stringIn[20];
    
    // This while loop is used to have the user retranslate another word if they would like. 
    while(again >= 1) {
        // This check is used to check if the word is above 7 characters.
        check = 0;
        printf("Welcome to the Pig Latin translator! Make sure the word is less than or equal to 7 characters.\n");
        // Checks to make sure the word is less than or equal to 7 characters by calling a function.
        while (check <= 0){
            printf("Please enter the word you would like to translate: ");
            scanf("%s",stringIn);
            check = StringCount(stringIn);
        }
        // Calls the translator function
        Translator(stringIn);
        // asks if the user wants to play again if yes it loops back.
        printf("Would you like to play again?\n");
        printf("If you enter any number = or greater than 1 it will play again.\n");
        printf("[1] Yes   [0] No\n");
        scanf("%i", &again);
    }
    
    return 0;
}
