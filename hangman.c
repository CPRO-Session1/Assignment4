//Clarke Littlejohn
//Hangman game
// Sometimes the game doesn't work when it is started do not know why.

#include<stdio.h>
#include<string.h>

int main(){

	char word [16] ="computerscience";
	char  wrong [16];
	int wrongT=0;
	char board [16]="_______________";
	int boolean =0;
	int counter=0;
	printf("Let's play hangman. You guess the word. If you guess incorrectly five times you lose.\n");

	char userIn;
	int i;

	while(i<=4){
		if(userIn!='\n')
			printf("Guess a Letter:");
	
		if(strcmp(word,board)==0)
			break;
		scanf("%c",&userIn);
	       int j=0;
	       boolean=0;
		for(;j<16;j++){
			if(word[j]==userIn){
				boolean=1;
				board[j]=word[j];
				counter++;
			}
		}
		if(boolean==0&&userIn!='\n'){
			wrong[wrongT]=userIn;
			wrongT++;
			i++;
		}
		int k=0;
		printf("\n  Wrong Guesses\n ");
			
		for(;k<16;k++){
			if(k%6==0&&k!=0)
				printf("\n");
			printf("%c",wrong[k]);
		}
		if(i==5)
			break;
	
		printf("\n");
		for(k=0;k<16;k++){
			printf("%c",board[k]);
		}
		printf("\n");
	}
	if(strcmp(word,board)==0)
		printf("You won!\n");
	else if(i==4)
		printf("You lost.\n");
			

	}

