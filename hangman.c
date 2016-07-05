//Anya Lauria
//Sort of works? But sometimes it rejects letters that are correct

#include <stdio.h> 

int main()
{

char word[4] = "food", guess;
int tries=3; 

printf("The word you have to guess has 4 letters :)\n"); 

do{
	for(int i=0;i<4;i++){
printf("Take a guess! What letter do you think is there?\n");
scanf("%c", &guess);
guess == getchar();

		if (word[i] == guess){
			printf("You guessed correctly!\n");
		}
		else {
			tries--;
			printf("Sorry, try again. Lives : %d\n", tries);
		}
	}
}while(tries>0);
{
if (tries == 0){
	printf("Out of tries. Better luck next time!\n");
	}
else{ 
printf("You guessed correctly! The word was food\n");
}
}
return 0;

}







