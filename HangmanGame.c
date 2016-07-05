#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	srand(time(0));
	char r =rand();
	int length = rand();
	length<15;
	printf("This word has \"%d\" characters", length);
	char word[length];
	char guess[length];
	int x = 0;
	char letter;
	while(x<4){
	scanf("%c",&letter);
	if(letter==word[x]){
		guess[x]==letter;
		printf("Please guess the next letter!\n");
	}
	else
	{
		printf("Try again!\n");
	}
	++x;
	continue;
	}
	return 0;
	}




