//Emma Ladouceur
//This is incomplete but in the works, I took so long on the other two that by the time I got to this I had very little time. SO sorry!

#include <stdio.h>

int main(){


	int i, j,k;

	printf("This is Hangman\n Enter a letter to guess.");

	char string[3] = "NYC";
	
	char guess;

	scanf("%c", &guess);

	printf("You have 4 guesses");

	for(i=0; i<4; i++){
		if(guess =='N' || guess=='Y' || guess=='C'){
			
			printf("youre right.");

		}

		else{
			break;
		}

		i++;
	}



}
