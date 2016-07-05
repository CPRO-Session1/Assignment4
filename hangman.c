/* Yael Kelmer.
 This code allows the player to play a game of hangman.*/

#include <stdio.h>
#include <string.h>

int main()
{
	char hangmanWord [7] = "peanut";

	char userGuess;
	int i;
	char fillArray [7] = "______";
	char incorrectGuesses [8];
	incorrectGuesses[0] = '\0';
	int incorrectGuessIndex = 0;

	int check = 0;

	while (1) {
		printf ("Please take your guess.\n");
		scanf (" %c", &userGuess);
		check = 0;
		for (i = 0; i < 6; i++) {
			if (userGuess == hangmanWord [i]) {
				fillArray [i] = userGuess;
				check = 1;
			}
		}
		if (check == 0) {
			incorrectGuesses[incorrectGuessIndex] = userGuess;
			incorrectGuessIndex++;
			incorrectGuesses[incorrectGuessIndex] = '\0';
		}

		printf ("This is your hangman situation: %s\n", fillArray);
		printf ("These are your incorrect guesses: %s\n", incorrectGuesses);
		if (incorrectGuessIndex == 8) {
			printf ("You lose!\n");
			break;
		}
		if (strcmp (hangmanWord, fillArray) == 0) {
			printf ("You won!\n");
			break;
		}

	}

}

