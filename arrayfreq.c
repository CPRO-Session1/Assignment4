/* Christopher Liu */
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100] = {};
	char reference[53] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};

	int counter[53] = {}; 
	for (int i = 0; i < (int) strlen(string); i++)
	{
		counter[i] = 0;
	}


	printf("Enter string: ");
	fgets(string, sizeof(string), stdin);
	string[strlen(string)-1] = '\0';

	for (int i = 0; i < (int) strlen(string); i++)
	{
		for (int j = 0; j < (int) strlen(reference); j++)
		{
			if (string[i] == reference[j])
			{
				counter[j] += 1;
			}
		}
	}

	for (int i = 0; i < (int) sizeof(counter)/4; i++)
	{
		if (counter[i] != 0)
		{
			printf("%c: %d\n", reference[i], counter[i]);
		}
	}
	return 0;
}
