/* Harry Brickner
   Given an array of integers, removes an array where all duplicate entries have been removed */
#include <stdio.h>

/* I might go back and write a more efficient sorting algorithm, but for now I'll just do a bubblesort */
void bubbleSort(int array[], int length){
	int inPerfectOrder = 0;
	for(int numLoops = 0; !inPerfectOrder; numLoops++){
		inPerfectOrder = 1;
		for(int i = 0; i < length - numLoops - 1; i++){
			if(array[i] > array[i + 1]){
				/* swaps the values */
				array[i] += array[i + 1];
				array[i + 1] = array[i] - array[i + 1];
				array[i] -= array[i + 1];
				inPerfectOrder = 0;
			}
		}
	}
}

/* returns true if the given array has an element equal to the given value */
int contains(int array[], int arrayLength, int value){
	for(int i = 0; i < arrayLength; i++){
		if(array[i] == value) return 1;
	}
	return 0;
}

int main(){
	printf("How long should the array be? ");
	int length;
	/* This bit makes sure that length is assigned, and that it is greater than 0 */
	while(1){
		while(!scanf("%d", &length)){
			printf("That is not a valid number. Try again.\n");
			while(getchar() != '\n');
		}
		if(length > 0) break;
		printf("That length is too low. Try again.\n");
	}
	int array[length];
	for(int i = 0; i < length; i++){
		int value;
		printf("Please give a value for the element at index %d: ", i);
		while(!scanf("%d", &value)){
			printf("That's not a valid number. Try again.\n");
			while(getchar() != '\n');
		}
		array[i] = value;
	}

	/* At this point, we have an array. Now we have to generate an array with no duplicates */
	int dupeless[length];
	int dlSize = 1;
	bubbleSort(array, length);
	dupeless[0] = array[0];
	for(int i = 1; i < length; i++){
		if(dupeless[dlSize - 1] != array[i])
			dupeless[dlSize++] = array[i];
	}
	
	printf("Output array is:\n");
	for(int i = 0; i < dlSize; i++)
		printf("%d, ", dupeless[i]);
	printf("\n");
	return 0;
}
