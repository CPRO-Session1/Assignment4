/*Ava N.*/
/*a program implementing the Hangman game.*/
/*I am submitting but would like to still work on this*/
#include <stdio.h>
int main(){
	
	char word[4]="sand";
	char correct[4]="----";
	char input_guess;
	int guessed_letters=0;
	int correct_guesses;
	char guesses [8];
	/*incorrect_correct_guesses[0]='\0';*/
	int counter;
	char loop='y';
	while(loop == 'y') {
		printf("Guess a letter: %c \n", input_guess);		
		scanf("%c", &input_guess);
		for(counter=0; counter<4; counter++){
			if(input_guess==word[counter]){
				guessed_letters++;
				//guesses--;
				printf("You guessed a correct letter. \n");
				printf("These are the number of blank spots you have: %s \n", correct);
				scanf("%s", &correct[4]);
				printf("You used %d guesses of 8 guesses.\n", guessed_letters);
			}
		//}
			else/*(input_guess!=word[counter])*/{
				guessed_letters++;
				printf("You guessed an incorrect letter. \n");
				//guesses--;
				printf("These are the number of blank spots you have: %s \n", correct);
				scanf("%s", &correct[4]);
				printf("You used %d guesses of 8 guesses.\n", guessed_letters);	
				//break;		
			}
		}
		printf("This is the word you have come up with so far: %s \n", correct);
		//printf("You used %d guesses of 8 guesses. \n", guessed_letters);
		if (guesses >= 8); {
			printf ("You have lost. Try again next time.\n");
			break;
		if(word==0 /*&& blank_spots==0*/); {
			printf ("You got the word, sand! You have won the game!\n");
			//break;
		}
	printf("do you want to play again? (y/n) ");
    	scanf(" %c", &loop);
    		if(loop != 'y')
      		loop='n';
	}
}
	return 0;
}
