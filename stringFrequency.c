#include <stdio.h>
#include <string.h>

int main()
{
	char string[101];
	int x;
	int freq[256] = {0};
	printf("Please enter a string.\n");
	gets(string);
	for (x = 0; string[x] != '\0'; x++)
	{
		freq[string[x]]++;
	}
	for (x = 0; x < 256; x++)
	{
		if (freq[x] != 0)
		{
			printf("%c: %d\n", x, freq[x]);
		}
	}
	return 0;
}
