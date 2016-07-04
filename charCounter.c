// Julia Tan
#include <stdio.h>
#include <string.h>

int main() {
	int check = 0;
	int doneAlready = 0;
	int count = 0;
	int l = 0;
	int ll = 0;
	char myString[100];
	char letters[25];
	int first = 0;
	fgets(myString, sizeof(myString),stdin); // prompts for string
	int length = (strlen(myString)-1); // length of string
	for (l = 0; l != length; l++){ // for each character in string
		for (ll = 0; ll != length; ll++){
			if (myString[l] == myString[ll]){ // compares current character to others in string
				count ++;
			}
		}
		for (check = 0; check != 26; check ++){ // checks if letter is already checked
			if (letters[check] == myString[l]){
				doneAlready = 1;
			}
		}
			if (count != 0){
                        letters[first] = myString[l];
			first ++;
			}
		if (doneAlready == 0){
			printf("The letter %c appears %d times.\n", myString[l], count);
		}
		count = 0;
		doneAlready = 0;
	}
	return 0;
}
