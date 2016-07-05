/*Sean Kee*/
/*Hangman v1.4*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("Welcome to HANGMAN\n");
	printf("******************\n");
	printf("   ______\n   I    !\n   I   \\@/\n   I    |\n   I   / \\     __@\n   I  [&&&]   \\  |\\\n[__I__[&&&]___II/ \\__\n| HANGMAN  v1.4      |__\n|_______________SEAN KEE|\n\n\n");
	
	char words[10][10] = {"rhythm ", "telemetry ", "argon ", "boron ", "specter ", "platform ", "kitchen ", "admiral ", "captain ", "chipotle "};
	char usedLetters[26];
	char input;
	int tries;
	int correctLetter;
	int startGame = 1;
	int result;
	//Counters
	int i;
	int j;
	int l = 0;
	
	printf("Would you like to start? [Y:1/N:2]\n#: ");
	scanf("%d", &startGame);
	
	do
	{
		//Resets all variables before game starts
		tries = 7;
		for (i = 0; i < 26; i++)
			usedLetters[i] = '1';
		result = 1;
		srand(time(NULL));
		j = rand();
		j = (j % 10);
		for (i = 0; i < 10; i++)
		{
			if (words[j][i] == ' ')
				break;
			l++;
		}
		char display[l];
		for (i = 0; i < l; i++)
			display[i] = '_';

		if (startGame == 1)
		{
			while (tries > 0)
			{
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				if (result == 0)
					tries = 8;
				switch(tries)
				{
					case 1:
						{
							printf("   ______\n   I    !\n   I   \\@/\n   I    |\n   I   / \\     __@\n   I  [&&&]   \\  |\\\n[__I__[&&&]___II/ \\__\n| Tries Left: %d      |__\n|_______________________|\n", tries);
							break;
						}
					case 2:
						{
							printf("   ______\n   I    !\n   I   \\@\n   I    |\\\n   I   /       __@\n   I  [&&&]   \\  |\\\n[__I__[&&&]___II/ \\__\n| Tries Left: %d      |__\n|_______________________|\n", tries);
							break;
						}
					case 3:
						{
							printf("   ______\n   I    !\n   I    @\n   I   /|\\\n   I           __@\n   I  [&&&]   \\  |\\\n[__I__[&&&]___II/ \\__\n| Tries Left: %d      |__\n|_______________________|\n", tries);
							break;
						}
					case 4:
						{
							printf("   ______\n   I    !\n   I    @\n   I   /|\n   I           __@\n   I  [&&&]   \\  |\\\n[__I__[&&&]___II/ \\__\n| Tries Left: %d      |__\n|_______________________|\n", tries);
							break;
						}
					case 5:
						{
							printf("   ______\n   I    !\n   I    @\n   I    |\n   I           __@\n   I  [&&&]   \\  |\\\n[__I__[&&&]___II/ \\__\n| Tries Left: %d      |__\n|_______________________|\n", tries);
							break;
						}
					case 6:
						{
							printf("   ______\n   I    !\n   I    @\n   I\n   I           __@\n   I  [&&&]   \\  |\\\n[__I__[&&&]___II/ \\__\n| Tries Left: %d      |__\n|_______________________|\n", tries);
							break;
						}
					case 7:
						{
							printf("   ______\n   I    !\n   I\n   I\n   I           __@\n   I  [&&&]   \\  |\\\n[__I__[&&&]___II/ \\__\n| Tries Left: %d      |__\n|_______________________|\n", tries);
							break;
						}
					case 8:
						{
							printf("   ______\n   I    !\n   I\n   I\n   I   \\@/     __@\n   I    |     \\  |\\\n[__I___/ \\____II/ \\__\n| Congrats! You won! |__\n|_______________________|\n");
							break;
						}
				}
				printf("\n");
				for (i = 0; i < l; i++)
				{
					printf("%c ", display[i]);
				}
				printf("\n");
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
				for (i = 0; i < l; i++)
				{
					if(input != words[j][i])
						continue;
					display[i] = words[j][i];
					correctLetter = 0;
				}
				if (correctLetter == 1)
				{
					for (i = 0; i < 26; i++)
					{
						if (usedLetters[i] == input)
						{
							tries--;
							break;
						}
						else
							if (usedLetters[i] == '1')
							{
								usedLetters[i] = input;
								tries--;
								break;
							}
					}
				}
				for (i = 0; i < l; i++)
				{
					if (words[j][i] != display[i])
					{
						result = 1;
						break;
					}
					else
						result = 0;
				}
			}
			if (result == 1)
			{
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				printf("\n\n   ______\n   I    !\n   I    !\n   I    !\n   I    !       __@\n   I    !      /  |\\\n[__I__  !  ___II_/ \\__\n| You | ! | Failed.  |__\n|_____| ! |_____________|\n\n\n");
			}
			printf("The word was: ");
			for (i = 0; i < 10; i++)
				printf("%c", words[j][i]);
			printf("\n\n*************************\n\n");
		}
		printf("Would you like to play again? [Y:1/N:2]\n#: ");
		scanf("%d", &startGame);
	} while (startGame == 1);

	return 0;
}

