/*Sean Kee*/
/*Hangman v1.3*/
#include <stdio.h>

int main()
{
	printf("Welcome to HANGMAN\n");
	printf("******************\n");
	printf("   ______\n   I    !\n   I   \\@/\n   I    |\n   I   / \\     __@\n   I  [&&&]   \\  |\\\n[__I__[&&&]___II/ \\__\n| HANGMAN  v1.3      |__\n|_______________SEAN KEE|\n\n\n");
	
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
		tries = 7;
		for (i = 0; i < 6; i++)
			display[i] = '_';
		for (i = 0; i < 26; i++)
			usedLetters[i] = '1';
		result = 1;

		if (startGame == 1)
		{
			while (tries > 0)
			{
				printf("\n\n");
				if (result == 0)
					tries == 8;
				switch(tries)
				{
					case 1:
						{
							printf("   ______\n   I    !\n   I   \\@/\n   I    |\n   I   / \\     __@\n   I  [&&&]   \\  |\\\n[__I__[&&&]___II/ \\__\n| Tries Left: %d     |__\n|_______________________|\n", tries);
							break;
						}
					case 2:
						{
							printf("   ______\n   I    !\n   I   \\@\n   I    |\\\n   I   /       __@\n   I  [&&&]   \\  |\\\n[__I__[&&&]___II/ \\__\n| Tries Left: %d     |__\n|_______________________|\n", tries);
							break;
						}
					case 3:
						{
							printf("   ______\n   I    !\n   I    @\n   I   /|\\\n   I           __@\n   I  [&&&]   \\  |\\\n[__I__[&&&]___II/ \\__\n| Tries Left: %d     |__\n|_______________________|\n", tries);
							break;
						}
					case 4:
						{
							printf("   ______\n   I    !\n   I    @\n   I   /|\n   I           __@\n   I  [&&&]   \\  |\\\n[__I__[&&&]___II/ \\__\n| Tries Left: %d     |__\n|_______________________|\n", tries);
							break;
						}
					case 5:
						{
							printf("   ______\n   I    !\n   I    @\n   I    |\n   I           __@\n   I  [&&&]   \\  |\\\n[__I__[&&&]___II/ \\__\n| Tries Left: %d     |__\n|_______________________|\n", tries);
							break;
						}
					case 6:
						{
							printf("   ______\n   I    !\n   I    @\n   I\n   I           __@\n   I  [&&&]   \\  |\\\n[__I__[&&&]___II/ \\__\n| Tries Left: %d     |__\n|_______________________|\n", tries);
							break;
						}
					case 7:
						{
							printf("   ______\n   I    !\n   I\n   I\n   I           __@\n   I  [&&&]   \\  |\\\n[__I__[&&&]___II/ \\__\n| Tries Left: %d     |__\n|_______________________|\n", tries);
							break;
						}
					case 8:
						{
							printf("   ______\n   I    !\n   I\n   I\n   I   \\@/     __@\n   I    |     \\  |\\\n[__I___/ \\____II/ \\__\n| Congrats! You won! |__\n|_______________________|\n");
							break;
						}
				}
				printf("\n");
				for (i = 0; i < 6; i++)
				{
					printf("%c ", display[i]);
				}
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
			if (result == 1)
				printf("\n\n   ______\n   I    !\n   I    !\n   I    !\n   I    !       __@\n   I    !      /  |\\\n[__I__  !  ___II_/ \\__\n| You | ! | Failed.  |__\n|_____| ! |_____________|\n\n");
		}
		printf("Would you like to play again? [Y:1/N:2]\n#: ");
		scanf("%d", &startGame);
	} while (startGame == 1);

	return 0;
}

