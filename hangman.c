#include <stdio.h>
/*Jack Rosen. The purpose is to play a game of hangman*/
int main()
{
	char guess[6] = "crazy", input, answer[8] = "_____  ", incorrectarray[9] = "        ";
	int sum = 0, incorrectint = 0;
	float incorrect = 0;
	printf("You get 8 incorrect guesses.\n");
	printf("The word has 5 letters \n _____\n");
	while (sum < 5 && incorrect < 8)
	{
		printf("What do you think is one letter?\n");
		scanf("%c", &input);
		if (input == '\n')
		{
			input = getchar();
		}
		for (int i = 0; i < 8; i++)
		{
			if (input == guess[i])
			{
				sum++;
				answer[i] = input;
			}
			else
			{

				incorrect += .125;
			}
		}
		for (int i = 0; i < 6; i++)
		{
			printf("%c", answer[i]);
		}
		printf("\n");
		incorrectint = (int)incorrect / 1;
		if (sum == 5)
		{
			printf("You win, the word was crazy\n");
			break;
		}
		if (incorrect == 8)
		{
			printf("You have had too many incorrect guesses so you lose\n");
			break;
		}
		printf("Your incorrect letters are: \n");
                for(int j = 0; j < 9; j++)
                {
		
			if (incorrectarray[j] != ' ' && incorrectarray[j] != '\0')
			{	
				printf("%c", incorrectarray[j]);
			}
			if (incorrect == incorrectint)
			{
				if ( incorrectarray[j] == ' ')
				{
					incorrectarray[j] = input;
					printf("%c", incorrectarray[j]);
					break;
				 	
				}
			}
		}
		incorrect = incorrectint;
		printf("\n");
		printf("You have made %d incorrect guesses\n", incorrectint);
		
	}
	return 0;
}
