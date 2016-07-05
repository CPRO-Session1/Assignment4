#include <stdio.h>
#include <string.h>

//Eli Kalish Hangman, I didn't do any of the optionals and this is shockingly hard-coded, and even with all that there is still a bug.
int main()
{
	printf("Welcome to Hangman! You better enjoy playing this because I wasted the Fourth of July coding it.\n");
	printf("You can only miss 4 letters because life isn't fair sometimes.\n");
	char guessed[5] = {' ',' ',' ',' ', '\0'};
	int wrong = 0;
	char word[] = "sadness";
	char wordd[8] = {' ',' ',' ',' ',' ',' ',' ', '\0'}; //This is what will show what people have guessed correctly. 
	while (wrong < 4) 
	{
		char guess = ' '; 
		if (guess != '\n'){
			printf("Here is what you have so far:\n");
			for (int i = 0; i < 7; i++)
			{
				printf("%c", wordd[i]);
			}
			printf("\nHere are the incorrect guesses you have so far:\n");
			for (int j = 0; j < 4; j++)
			{
				printf("%c ", guessed[j]);
			}
			printf("\nYou have %d incorrect guesses so far.\n", wrong);
			printf("What letter are you guessing this time?\n");
			scanf("%c", &guess);
			if (guess != '\n') {
			switch (guess) 
			{
				case 's':
					printf("You guessed correctly!\n");
					wordd[0] = 's';
					wordd[5] = 's';
					wordd[6] = 's';
					break;
				case 'a':
					printf("You guessed correctly!\n");
					wordd[1] = 'a';
					break;
				case 'd':
					printf("You guessed correctly!\n");
					wordd[2] = 'd';
					break;
				case 'n':
					printf("You guessed correctly!\n");
					wordd[3] = 'n';
					break;
				case 'e':
					printf("You guessed correctly!\n");
					wordd[4] = 'e';
					break;
				default:
					printf("You guessed incorrectly, you failure.\n");
					guessed[wrong] = guess;
					wrong++;
			}
		}
		}
		if (!(strcmp(wordd, word))) 
		{
			printf("Congratulations, you won. The word was sadness, now you understand what I felt when I coded this. Now please get on with your day.\n");
			break;
		}
	}
	if (wrong == 4){
		printf("Wow, you lost and have brought shame upon your clan. You can try again if you want, just run this again.\n");
	}
	return 0;
}





