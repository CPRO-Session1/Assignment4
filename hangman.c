/* Matthew Danielson
*  7/4/16
*  Hangman.c
*  The hangman game; pretty self explanatory
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
	//Hardcoded keyword
	char keywords[5][6];
	strcpy(keywords[0], "train");
	strcpy(keywords[1], "power");
	strcpy(keywords[2], "magic");
	strcpy(keywords[3], "loose");
	strcpy(keywords[4], "wrath");
	int replay = 1;
	int gameloop = 1;
	srand(time(NULL));
	char keyword[6];
	char guess[26];//All characters that can be guessed
	char correct[6];
	char cguess;
	int counter = 0;
	int check;
	char throwaway;
	while(replay){
		for(int x = 0; x < sizeof(guess); x++){
			guess[x] = 0;
			if(x<6)
				correct[x] = 0;
		}
		counter = 0;
		int choice = rand()%6;
		int remaining = 5;
		strcpy(keyword, keywords[choice]);	
		printf("Welcome to Hangman! Attempt to guess the word a letter at a time!\n");
		while(gameloop){
			printf("Wrong guessed letters: ");
			for(int x = 0; x<sizeof(guess)-1; x++)
				printf("%c ", guess[x]);
			printf("\n");
			printf("Guesses remaining: \n");
			printf("%d \n \n", remaining); 
			for(int x = 0; x < sizeof(correct)-1; x++){
				if(correct[x] == 0)
					printf("_ ");
				else
					printf("%c ", correct[x]);
			}
			printf("\n Please enter a guess:\n ");
			scanf("%c", &cguess);
			scanf("%c", &throwaway);	
			//Checking
			check = 0;
			for( int x = 0; x< sizeof(keyword)-1; x++){
				if(cguess == keyword[x]){
					correct[x] = keyword[x];
					check = 1;	
				}
			}
			if(!(strcmp(keyword,correct))){
				printf("You win!");
				remaining = 0;
			}
			if( check != 1){
				remaining--;
				guess[counter] = cguess;
				counter++;
			}

			check = 1;
		if(remaining == 0)
			gameloop = 0;
		
		}
	printf("Would you like to play again?(1 = yes, 0 = no)");
	scanf("%d", &replay);
	if(replay != 0)
		gameloop = 1;

	}
}
