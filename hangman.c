/* Christopher Liu - wasn't sure how to end the game if you won, and the try counter is messed up */
#include <stdio.h>
#include <string.h>

int main()
{
	char hangword[7] = "eighth";
	int guessed[6] = {0,0,0,0,0,0}, tries = 0;

	while (tries <= 10)
	{
		printf("Tries: %d/10\n", tries);
		printf("Current board state: \n");
		for (int i = 0; i < (int) strlen(hangword); i++)
		{
			if (guessed[i])
			{
				printf("%c ", hangword[i]);
			}
			else
			{
				printf("_ ");
			}
		}
		printf("\n");

		printf("Guess a letter: ");
		char guess;
		scanf("%c", &guess);

		for (int i = 0; i < (int) strlen(hangword); i++)
		{
			if (guess == hangword[i])
			{
				guessed[i] = 1;
			}
		}

		int check_won = 0;
		for (int i = 0; i <= (int) sizeof(guessed)/4; i++)
		{
			if (guessed[i] == 1) check_won++;
		
		}
		if (check_won == 6) 
		{
			printf("You won!\n");
			break;
		}
		tries++;
	}
	printf("no more tries\n");
}
