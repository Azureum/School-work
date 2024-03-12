int main()
{	/* print out str1 character by character */      
	char str1[30] = "Good morning";
	char str2[30] = "How is your day going?";
	char name[20];
	
	//output
	//option 1 - printf str1 one letter at a time
    for(int i = 0; i  < 30; i++){
        printf("%c ", str1[i]);
    }
	
	//option 2 print str2 all at once
    printf("\n%s\n",str2);

	//ask the user to enter their first name and use it in a sentence
    printf("Enter your name: ");
    scanf("%s",name);
    printf("%s knows how to type on a keyboard.\n", name);

    //Madd Lib
    /*Mad Libs is a phrasal template word game created by Leonard Stern[1][2] and Roger Price.[3] 
    It consists of one player prompting others for a list of words to substitute for blanks in 
    a story before reading aloud. The game is frequently played as a party game or as a pastime.

    The game was invented in the United States, and more than 110 million copies of Mad Libs books 
    have been sold since the series was first published in 1958
    
    Write a program that asks the user to enter 5 parts of speech and then prints a story with 
    those words inserted to the story.
    */
    char noun1[15], noun2[15], noun3[15], verb[15], adj1[15], adj2[15];
    printf("Enter a noun: ");
    scanf("%s",noun1);
    printf("Enter a verb: ");
    scanf("%s", verb);
    printf("Enter a noun: ");
    scanf("%s", noun2);
    printf("Enter an adjective: ");
    scanf("%s", adj1);
    printf("Enter a noun: ");
    scanf("%s", noun3);
    printf("Enter an adjective: ");
    scanf("%s", adj2);
    
    printf("One %s day, Bob decided to %s to the %s. ", adj1, verb, noun1);
    printf("Along the way, he met a %s who gave him a %s. ", noun2, noun3);
    printf("Despite that, Bob's day turned out to be %s.", adj2);
	
	return 0;
}
