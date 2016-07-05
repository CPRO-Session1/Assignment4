//Bettina Benitez
#include <stdio.h>
#include <string.h>

int main() {
	int i; 
	int counter = 0; //counts how many of each letter
	char string[100];
	char letters[51];
	fgets(string, sizeof(string), stdin); //prompt
	int strlength = (strlen(string)-1);// gets the length
	for (i = 0; i < strlength; i++) {
		for (int j = 0; i < strlength; i++) { //checks for the same letter
			if (string[i] == string[j]) {
				counter ++;
				for (i = 0; i < strlength; i++) { //printing the results
					printf("%c == %d\n", string[i], counter);
				}
			}
		}
	}
	return 0;
}

