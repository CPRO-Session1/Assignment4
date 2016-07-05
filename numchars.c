#include <stdio.h>

/*number of a char in an input
I wanted to do something a little nicer than just creating a counter for each letter so I tried to do this (alphabetizes and splits the array). It mostly works except it doesn't recognize uppercase and lowercase as different and sometimes has a few glitches. I've been looking at it for a while and was wondering someone could advise me on how to fix this but I can look more tomorrow. Sorry it isn't 100% yet, but I thought it would be good to try something a little more complex.
  @author Aly Milich
  */

int main(){

	int amount, i, j, counter=1, resets =0;

	printf("How many characters do you want to input?\n");
	scanf("%d", &amount);

	char input[amount];
	char letter[amount];
	int number[amount];

	printf("Enter the chars you would like to input.\n");

	char temp;

	for(i=0; i<amount; i++){
		scanf("%c", &input[i]);
		input[i] = getchar();
	}

	/*alphabetize array*/
	for(i=0; i<amount; i++){
		for(j=0; j<amount-1; j++){
			if(input[j]>input[j+1]){
				temp = input[j+1];
				input[j+1] = input[j];
				input[j] = temp;
			}
		}
	}

	letter[0] = input[0];
	number[0] = 1;

	for(i=1; i<amount; i++){
		if(input[i] == input[i-1])
			counter++;
		else if(input[i] != input[i+1]){
			resets++;
			number[resets-1] = number[resets-1] + counter;
			letter[resets] = input[i];
			counter = 1;
		}

		number[amount-1] = counter;
	}

	for(i=0; i<amount; i++)
		printf("%c, %d\n", letter[i], number[i]);

	return 0;
}
