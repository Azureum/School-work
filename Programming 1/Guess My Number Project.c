/******************************************************************************
Matthew
October 31, 2023
Goal:  Write the basic code to the guess my number program.
 |\__/,|   (`\
 |_ _  |.--.) )
 ( T   )     /
(((^_(((/(((_/
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Function to display the "Congratulations" sign
void CongratulationsSign(void){
    printf(" CCC                       t       l      t                  !!! \n");
    printf("C                          t       l      t  ii              !!! \n");
    printf("C    ooo nnn  ggg rrr  aa ttt u  u l  aa ttt    ooo nnn   ss !!! \n");
    printf("C    o o n  n g g r   a a  t  u  u l a a  t  ii o o n  n  s      \n");
    printf(" CCC ooo n  n ggg r   aaa  tt  uuu l aaa  tt ii ooo n  n ss  !!! \n");
    printf("            g                                                \n");
    printf("          ggg                                             \n");
}

// Function to display the "Guess My Number" sign
void GuessMyNumberSign(void){
    
    printf(" GGG                       M   M          N   N            b            \n");
    printf("G                          MM MM          NN  N            b            \n");
    printf("G  GG u  u eee  ss  ss     M M M y  y     N N N u  u mmmm  bbb  eee rrr \n");
    printf("G   G u  u e e  s   s      M   M y  y     N  NN u  u m m m b  b e e r   \n");
    printf(" GGG   uuu ee  ss  ss      M   M  yyy     N   N  uuu m m m bbb  ee  r   \n");
    printf("                                    y                                   \n");
    printf("                                 yyy                                    \n");
}

// Function to display the "Too High" sign
void TooHighSign(void){
  printf(" TTTTTT             H  H        h        !!! \n");
  printf("   TT               H  H ii     h        !!! \n");
  printf("   TT   ooo ooo     HHHH    ggg hhh      !!! \n");
  printf("   TT   o o o o     H  H ii g g h  h         \n");
  printf("   TT   ooo ooo     H  H ii ggg h  h     !!! \n");
  printf("                          g              \n");
  printf("                         ggg              \n");
}

// Function to display the "Too Low" sign
void TooLowSign(void){
    printf(" TTTTTT             L                  !!! \n"); 
    printf("   TT               L                  !!! \n"); 
    printf("   TT   ooo ooo     L    ooo w   w     !!! \n"); 
    printf("   TT   o o o o     L    o o w w w         \n"); 
    printf("   TT   ooo ooo     LLLL ooo  w w      !!! \n"); 
}

// Function to display the "Difficulty" sign
void DifficultySign(void){
    printf("DDDDD   iii  fff  fff iii                lll tt            \n"); 
    printf("DD  DD      ff   ff         cccc uu   uu lll tt    yy   yy \n"); 
    printf("DD   DD iii ffff ffff iii cc     uu   uu lll tttt  yy   yy \n"); 
    printf("DD   DD iii ff   ff   iii cc     uu   uu lll tt     yyyyyy \n"); 
    printf("DDDDDD  iii ff   ff   iii  ccccc  uuuu u lll  tttt      yy \n"); 
    printf("                                                    yyyyy  \n"); 
}

int main()
{
    // the Random number generator with the current time
    srand(time(NULL));
    
    int number, guess, count, userSelection = 1;
    
    // Outermost loop: allows the player to play the game again
    while (userSelection == 1) {
        // Display the "Guess My Number" sign
        GuessMyNumberSign();
        printf("\nWelcome to the Guess the Number game!\n");
        printf("I've selected a random number in a range varying difficulties. You'll have 20 guesses to get it correct! Good Luck!\n\n");
        DifficultySign(); // Display difficulty options
        printf("Dificulty Levels: \n Hard, 1-1000 [1] \n Medium, 1-500 [2] \n Easy, 1-100 [3]\n");
        printf("Please select difficulty: ");
        scanf("%i", &userSelection);

        // Loop to ensure a valid difficulty selection (1, 2, or 3)
        do {
            switch (userSelection) {
                case 1:
                    // Set the range for hard difficulty
                    number = (rand() % 1000) + 1;
                    printf("You have selected Hard difficulty (1-1000)\n");
                    break;
                case 2: 
                    // Set the range for the medium difficulty
                    number = (rand() % 500) + 1;
                    printf("You have selected Medium difficulty (1-500)\n");
                    break;
                case 3:
                    // Set the range for Easy difficulty
                    number = (rand() % 100) + 1;
                    printf("You have selected Easy difficulty (1-100)\n");
                    break;
                default:
                    // Prompt for a valid option if users selection is not valid
                    printf("Please choose a valid option.\n");
            }
        } while (userSelection < 1 || userSelection > 3);

        // Main game loop: allows the player to make guesses
        do {
            count += 1; // Increase the count of guesses
            printf("Enter a number: ");
            scanf("%i", &guess); // Get the player's guess

            // Check if the player has used all their guesses
            if (count > 20) {
                printf("You ran out of guesses, you used 20 / 20 guesses!\n");
                count = 0; // Reset the guess count
                break; // Exit the game loop
            } else if (guess == number) {
                // Correct guess
                CongratulationsSign();
                printf("Good job, the number was %i, you guessed in in %i tries.\n", number, count);
            } else {
                // Check if the guess is within the valid range for the selected difficulty
                if ((userSelection == 1 && (guess > 1000 || guess < 1)) || 
                    (userSelection == 2 && (guess > 500 || guess < 1)) || 
                    (userSelection == 3 && (guess > 100 || guess < 1))) {
                    printf("The guess is out of the range of the selected difficulty.\n");
                } else if (guess > number) {
                    // Guess is too high
                    TooHighSign();
                    printf("Too high! Try again.\n");
                } else {
                    // Guess is too low
                    TooLowSign();
                    printf("Too low! Try again.\n");
                }
            }
            printf("You have %i guesses left!\n", 20 - count); // Displays remaining guesses
        } while (guess != number); // Continue the game loop until the correct guess

        // Ask if the player wants to play again and validate their choice
        printf("\nDo you want to play again?\n");
        printf("Yes [1], No [2]\n");
        do {
            printf("Please enter a choice: ");
            scanf("%i", &userSelection);
            
            if (userSelection != 1 && userSelection != 2) {
                printf("Invalid choice. Please enter 1 for 'Yes' or 2 for 'No'.\n");
            }
        } while (userSelection != 1 && userSelection != 2);
        
        if (userSelection == 2) {
            break; // Exit the outermost loop if the player chooses not to play again
        }
    }
    
    return 0;
}
