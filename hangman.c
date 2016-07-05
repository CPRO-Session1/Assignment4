// Julia Tan
#include <stdio.h>
#include <string.h>

int main(){
	char word[100]; // Word that the player has to guess. This word is chosen by another player.
	char blanksList[100]; //
	int count = 0; // counter
	int guess = 0;
	int letters = 0; // chars left to guess
	int guessedCorrectly = 0;
	int draw = 0;
	char userIn;
	printf("Enter word for player to guess:\n");
	fgets(word, sizeof(word), stdin);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	for (count = 0; count != strlen(word)-1; count ++) // for each letter print a blank
	{
		blanksList[count] = '_';
		printf("%c", blanksList[count]);
		letters  ++;
	}
	printf("\n");
	while (letters != 0)
	{ // while all letters haven't been guesed
		printf("Guess a letter:\n");
		scanf(" %c", &userIn);
		for (count = 0; count != strlen(blanksList); count ++)
			{
			if (userIn == word[count])
			{
				blanksList[count] = word[count];
				letters --;
				guessedCorrectly = 1;
			}
		}
		if (guessedCorrectly != 1)
		{
			draw ++;
		}
		guessedCorrectly = 0;
		switch(draw)
		{
			case 0 :
				printf("  +---+  \n");
				printf("  |   |  \n");
				printf("      |  \n");
				printf("      |  \n");
				printf("      |  \n");
				printf("      |  \n");
				printf("=========\n\n");
				break;
			case 1 :
				printf("  +---+  \n");
				printf("  |   |  \n");
				printf("  O   |  \n");
				printf("      |  \n");
				printf("      |  \n");
				printf("      |  \n");
				printf("=========\n\n");
				break;
			case 2 :
				printf("  +---+  \n");
				printf("  |   |  \n");
				printf("  O   |  \n");
				printf("  |   |  \n");
				printf("      |  \n");
				printf("      |  \n");
				printf("=========\n\n");
				break;
			case 3 :
				printf("  +---+  \n");
				printf("  |   |  \n");
				printf("  O   |  \n");
				printf(" /|   |  \n");
				printf("      |  \n");
				printf("      |  \n");
				printf("=========\n\n");
				break;
				case 4 :
			printf("  +---+  \n");
				printf("  |   |  \n");
				printf("  O   |  \n");
				printf(" /|\\  |  \n");
				printf("      |  \n");
				printf("      |  \n");
				printf("=========\n\n");
				break;
			case 5 :
				printf("  +---+  \n");
				printf("  |   |  \n");
				printf("  O   |  \n");
				printf(" /|\\  |  \n");
				printf(" /    |  \n");
				printf("      |  \n");
				printf("=========\n\n");
				break;
			case 6 :
				printf("  +---+  \n");
				printf("  |   |  \n");
				printf("  O   |  \n");
				printf(" /|\\  |  \n");
				printf(" / \\  |  \n");
				printf("      |  \n");
				printf("=========\n\n");
				printf("Sorry, you died! The word was: %s", word);
				letters = 0;
				break;
		}
		if (draw != 6)
			printf("%s \n", blanksList);
	}
	if (draw != 6)
		printf("Congratulations, you won! You had %d mistakes.\n",draw);
	return 0;
}
