/* Yael Kelmer. 
 This code takes a user inputed string and counts the amount of times each letter shows up in the string. */

#include <stdio.h>
#include <string.h>

int main ()
{

	printf ("Please type in the letters you want in your string\n");
	char userString [100];
	fgets (userString, sizeof(userString), stdin);

	int stringLength = strlen (userString);
	userString [stringLength - 1] = '\0';
	stringLength -= 1;

	int ASCIIarray [128];
	
	int i;
	for (i = 0; i < 128; i++) {
		ASCIIarray [i] = 0;
	}

	for (i = 0; i < stringLength; i++) {
		char letter = userString [i];
		ASCIIarray [(int) letter] += 1;
	}

	for (i = 0; i < 128; i++) {
		if (ASCIIarray [i] > 0) {
			printf ("%c = %d\n", (char) i, ASCIIarray [i]);
		}
	}
}



