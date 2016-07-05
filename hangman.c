/*Sean Kee*/
/*Hangman v1.0*/
#include <stdio.h>

int main()
{
	printf("Welcome to Hangman\n");
	
	char display[6];
	char word[6] = "rhythm";
	char usedLetters[26];
	char input;
	int tries;
	int correctLetter;
	int startGame = 1;
	int result;
	//Counters
	int i;
	
	printf("Would you like to start? [Y:1/N:2]\n#: ");
	scanf("%d", &startGame);
	
	do
	{
		//Resets all variables before game starts
		tries = 6;
		for (i = 0; i < 6; i++)
			display[i] = '_';
		for (i = 0; i < 26; i++)
			usedLetters[i] = '1';
		result = 1;

		if (startGame == 1)
		{
			while (tries > 0)
			{
				for (i = 0; i < 6; i++)
				{
					printf("%c ", display[i]);
				}
				printf("\nTries Remaining: %d", tries);
				printf("\nUsed Letter: ");
				for (i = 0; i < 26; i++)
				{
					if (usedLetters[i] == '1')
						break;
					printf("%c|", usedLetters[i]);
				}
				if (result == 0)
					break;
				printf("\n#: ");
				input = getchar();
				input = getchar();
				correctLetter = 1;
				for (i = 0; i < 6; i++)
				{
					if(input != word[i])
						continue;
					display[i] = word[i];
					correctLetter = 0;
				}
				if (correctLetter == 1)
				{
					for (i = 0; i < 26; i++)
					{
						if (usedLetters[i] == '1')
						{
							usedLetters[i] = input;
							tries--;
							break;
						}
					}
				}
				for (i = 0; i < 6; i++)
				{
					if (word[i] != display[i])
					{
						result = 1;
						break;
					}
					else
						result = 0;
				}

			}
			if (result == 0)
				printf("\n\nCongrats! You won!\n\n");
			else
				printf("\n\nAwe shucks. You lost :\(\n\n");
		}
		printf("Would you like to play again? [Y:1/N:2]\n#: ");
		scanf("%d", &startGame);
	} while (startGame == 1);

	return 0;
}

