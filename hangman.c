#include <stdio.h>

/* game of hangman

   @author Aly Milich
   */

int main(){

	char word[8] = "computer", guess;
	int lives=5;

	printf("You have 5 lives.\n");
	printf("The word has 8 letters.");

	while(1){
			printf("Enter your guess.\n");
			scanf("%c", &guess);

			guess = getchar();

		for(int i =0; i<5; i++){

			if(word[i] == guess)
				printf("That is one of the letters!\n");
			else{
				printf("That is not one of the letters.\n");
				lives--;
				printf("You have %d lives left.\n", lives);
			}

		}
	}

	if(lives == 0){
		printf("You lose.");
	}

	return 0;

}
