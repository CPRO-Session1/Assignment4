/*Rumeet Goradia - Hangman*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
	char ans;
	do{
		char* word[16];
		srand(time(NULL));
		int r = rand()%10;
		switch (r){
			case 0:
				word[16]="interpolatively";
				break;
			case 1:
				word[16]="vascularisation";
				break;
			case 2:
				word[16]="nonfrangibility";
				break;
			case 3:
				word[16]="subpreceptorial";
				break;
			case 4: 
				word[16]="dermatoglyphics";
				break;
			case 5:
				word[16]="hypoproteinemia";
				break;
			case 6:
				word[16]="antisensitizing";
				break;
			case 7: 
				word[16]="prealphabetical";
				break;
			case 8:
				word[16]="isothermobathic";
				break;
			case 9:
				word[16]="nonnitrogenized";
				break;
		}
		printf("Let's play a game of HANGMAN!\n");
		printf("Here's your word:\n");
		int i;
		char guess[16];
		for (i=0; i<16; i++)
		{
			guess[i]='_';
			if (i==15)
				guess[i]='\0';
			printf(" %c ", guess[i]);
		}
		printf("\n");
		char correctbank[26];
		char wrongbank[26];
		
		char input;
		int j, k, m, p, t, u; /*counters*/
		int n=0;
	
		int s=0;
		int counter;
		int breaker;
		int total=15;
		do{
			printf("Guess a letter!\n");
			scanf("%c", &input);
			counter=0;
			breaker=0;
			for (j=0; j<15; j++)
			{
				
				for (t=0;t<n;t++){
					if(input==wrongbank[t]){
						breaker=1;
					}
				}
				for(u=0;u<s;u++){
					if(input==correctbank[u]){
						breaker=1;
					}
				}
				if (breaker==1)
				{
					printf("You already guessed that letter!\n");
					break;
				}
				if (input==word[j])
				{
					guess[j]=input;
					correctbank[s]=input;

					s++;
					
				}
				if (input!=word[j])
				{
					counter++;
				}
				
			
				if (counter==total)
				{	
					
					printf("Sorry, that letter isn't in the word.\n");
					wrongbank[n]=input;
					n++;
				}
			
				if (counter!=total&&j==14)
				{
					printf("Good guess!\n");
				}
			}

			printf("Letters you've guessed correctly: \n");
			for (k=0; k<s; k++)
			{
				printf("%c  ",correctbank[k]);
			}
			printf("\nLetters you've guessed incorrectly: \n");
			for (m=0; m<n; m++)
			{
				printf("%c  ", wrongbank[m]);
			}
			printf("\n");

			switch (n){
				case 0:
					printf(" _________     \n");
					printf("|         |    \n");
					printf("|              \n");
					printf("|              \n");
					printf("|              \n");
					printf("|              \n");
					printf("|              \n");
					break;
				case 1:
					printf(" _________     \n");
					printf("|         |    \n");
					printf("|         O    \n");
					printf("|              \n");
					printf("|              \n");
					printf("|              \n");
					printf("|              \n");
					break;
				case 2:
					printf(" _________     \n");
					printf("|         |    \n");
					printf("|         O    \n");
					printf("|         |    \n");
					printf("|              \n"); 
					printf("|              \n"); 
					printf("|              \n"); 
					break;
				case 3:
					printf(" _________     \n");
					printf("|         |    \n"); 
					printf("|         O    \n");
					printf("|        /|    \n");
					printf("|              \n"); 
					printf("|              \n"); 
					printf("|              \n"); 
					break;
				case 4:
					printf(" _________     \n");
					printf("|         |    \n");
					printf("|         O    \n");
					printf("|        /|\\  \n");
					printf("|              \n"); 
					printf("|              \n"); 
					printf("|              \n"); 
					break;
				case 5:
					printf(" _________     \n");
					printf("|         |    \n"); 
					printf("|         O    \n"); 
					printf("|        /|\\  \n"); 
					printf("|        /     \n"); 
					printf("|              \n"); 
					printf("|              \n"); 
					break;
				case 6:
					printf(" _________     \n");
					printf("|         |    \n");
					printf("|         O    \n"); 
					printf("|        /|\\  \n");
					printf("|        / \\  \n");
					printf("|              \n"); 
					printf("|              \n"); 
					break;
			}
			getchar();
			for (p=0; p<15; p++){
				printf("%c  ", guess[p]);
			}
			printf("\n");
		}while(n<6||s<15);
		
		if (n==6){
			printf("Sorry! You lost.\n");
			printf("Play again? Enter Y for yes or N for no.\n");
		}
		if (s==15){
			printf("Congratulations! You won!\n");
		 	printf("Play again? Enter Y for yes or N for no.\n");
		}
		do{
			scanf("%c", &ans);
			if (ans!='Y'||ans!='y'||ans!='N'||ans!='n'){
				printf("Sorry, that's not a valid option. Please try again.\n");
			}
		}while((ans!='Y'||ans!='y'||ans!='N'||ans!='n'));
	}while(ans=='Y'||ans=='y');
return 0;
}


