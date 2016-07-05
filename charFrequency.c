/* Harry Brickner
   Given a string, will return the frequencies of each character in the string */
#include <stdio.h>
#include <string.h>

int main(){
	printf("Please input a string.\n");
	char input[101];
	scanf("%s", input);
	int length = strlen(input);
	
	char uniqueChars[length];
	int uniqueCharCount[length];
	int ucSize = 0;

	for(int i = 0; i < length; i++){
		int contains = 0;
		int j;
		for(j = 0; j < ucSize; j++){
			if(uniqueChars[j] == input[i]){
				contains = 1;
				break;
			}
		}

		if(contains){
			uniqueCharCount[j]++;
		}else{
			uniqueChars[ucSize] = input[i];
			uniqueCharCount[ucSize++] = 1;
		}
	}
	for(int i = 0; i < ucSize; i++){
		printf("\'%c\' = %d\n", uniqueChars[i], uniqueCharCount[i]);
	}
}
