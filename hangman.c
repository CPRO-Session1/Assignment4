#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<string.h>
#include<ctype.h>

void man(int x){
	switch (x){
		case 1:
			printf("Number of Wrong letters: %d \n" , x);
			printf(" _______ \n");
			printf(" |     | \n");
			printf(" |     O \n");
			printf(" |       \n");
			printf(" |       \n");
			printf(" |       \n");
			printf("---------\n");
			break;
		case 2: 
			printf("Number of Wrong letters: %d \n" , x);
			printf(" _______ \n");
			printf(" |     | \n");
			printf(" |     O \n");
			printf(" |     | \n");
			printf(" |     | \n");
			printf(" |       \n");
			printf("---------\n");
			break;
		case 3:
			printf("Number of Wrong letters: %d \n" ,x);
			printf(" _______ \n");
			printf(" |     | \n");
			printf(" |     O \n");
			printf(" |     | \n");
			printf(" |     | \n");
			printf(" |    / \\\n");
			printf("---------\n");
			break;
		case 4:
			printf("Number of Wrong letters: %d \n" , x);
			printf("_______ \n");
			printf("|     | \n");
			printf("|     X \n");
			printf("|    \\|/ \n");
			printf("|     | \n");
			printf("|    / \\\n");
			printf("--------- \n");
			break;
	}
}
int main(void){
	char rsp;
	do{
		srand(time(NULL));
		char WordArray[][16] = {
			"hitler",
			"giraffe",
			"olive",
			"pickle",
			"programming",
			"diamond",
			"california",
			"trash",
			"phone",
			"luggage"
		};
		int r = rand()%10;
		char *Word = WordArray[r];
		char Word2[strlen(Word)+1];
		strcpy(Word2,Word);
		int WordLength = strlen(Word2);
		char *DotWord = malloc(WordLength);
		int t;
		for (t=0;t<= WordLength; t++){
			if (t==WordLength){
				DotWord[t]='\0';
			}else{
				DotWord[t]='*';
			}
		}
		printf("Welcome to Hangman! \n");
		printf("To win the game, you must guess the word. \n");
		printf("You will lose after four incorrect letter guesses. \n");
		printf("All words are in lower case, please disable caps lock. \n");
		printf("Your word is: %s \n", DotWord);
		printf("Please Enter Your Guess:");
		int mistakes=0;
		int check=0;
		int x,n=0;
		char CharInput[100];
		char* CorrectWord = Word2;
		while((strcmp(DotWord, CorrectWord) !=0) && (mistakes <4)){
			scanf("%c", &CharInput[n]);
			if (CharInput[n] != '\n'){
				for(x=0;x<WordLength;x++){
					if(CorrectWord[x]==CharInput[n]){
						DotWord[x] = CharInput[n];
						check=1;
					}
				}
				if(check == 0){
					mistakes++;
					printf("The Letter was incorrect.\n");
					man(mistakes);
				}else{
					check=0;
					printf("The Letter appeared in the word. \n");
				}
				printf("The word is: %s \n", DotWord);
				printf("The words you have inputted are: \n");
				for (int y = 0; y < n+1; y++){
					printf("%c\n" , CharInput[y]);
				}
				if((strcmp(DotWord,CorrectWord)!=0)&&(mistakes<4)){
					printf("Please Enter Your Guess:");
				}
			}
			n++;
		}
		printf("--Your Result is-- \n");
		if ((strcmp(DotWord, CorrectWord) ==0) && (mistakes <4)){
			printf("Good Job, You have guessed the word! \n");
		} else {
			printf("You have guessed the wrong word. \n Sorry, the correct word was: %s \n", Word2);
		}
		printf("Do you want to play again? Y/N \n");
		getchar();
		rsp=getchar();
		printf("-------------------------------------------- \n");
	}while(rsp == 'Y' || rsp == 'y');
	printf("Thank you for playing. \n");
	return 0;
}
