/* Harry Brickner
   Given an array, will return an array where each element is equal to the sum of all elements of the provided array with inices different than that of the element in question */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Get an array where each element is equal to the sum of all elements with a different index in the provided array */
void calculateSumArray(int array[], int length){
	int sumArray[length];
	int sum = 0;
	printf("The input array is:\n");
	for(int i = 0; i < length; i++){
		sum += array[i];
		printf("%d, ", array[i]);
	}
	printf("\nAnd the output array is:\n");
	for(int i = 0; i < length; i++){
		sumArray[i] = sum - array[i];
		/* I could just print it out without storing it in an array, but the assignment sounded like I was supposed to store it in an array */
		printf("%d, ", sumArray[i]);
	}
	printf("\n");
}

/* checks if the given length is valid and prints an error message if it isn't.*/
int checkLength(int length){
	if(length <= 1){
		printf("The given length is too low. Please try again.\n");
		while(getchar() != '\n');
		return 0;
	}
	return 1;
}

int main(){
	printf("To input an array, please enter the number of elements you'd like to input. To generate a random array, please enter \"random <length_of_array>\"\n");
	int length;
	while(1){
		if(scanf("random %d", &length)){
			if(!checkLength(length)) continue;
			int array[length];
			srand(time(0));
			for(int i = 0; i < length; i++)
				array[i] = rand() % 100;
			calculateSumArray(array, length);
			return 0;
		}else if(scanf("%d", &length)){
			if(!checkLength(length)) continue;
			int array[length];
			int i = 0;
			while(i < length){
				printf("Please input the value for the element with index %d: ", i);
				int value;
				if(scanf("%d", &value)){
					array[i++] = value;
				}else{
					printf("That is not a valid number. Try again.\n");
					while(getchar() != '\n');
				}
			}
			calculateSumArray(array, length);
			return 0;
		}else{
			printf("That's not a valid command. Try again.\n");
			while(getchar() != '\n');
		}
	}
}
