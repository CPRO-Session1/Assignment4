/*Ava N.*/
/*Given an array of n integers where n > 1, return an array of same size an input array where at every index of the output array should contain the sum of all elements in the array except the element at the given index. You can have it so that the array is input by the user. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {	
	int array_size = 5; /* Array size of 5 */
	int input_array[array_size];
	int output_array[array_size];
	int array_sum = 0;
	int counter;

	for(counter = 0; counter < array_size; counter++)
	{
		scanf("%d", &input_array[counter]); /* input numbers into array */
	}
	
	for(counter = 0; counter < array_size; counter++)
	{
		array_sum +=input_array[counter];  /* calculate sum of numbers in array */
	}

	printf("Sum of numbers in array is: %d\n", array_sum);

	for(counter=0; counter < array_size; counter++)
	{
		output_array[counter] = array_sum-input_array[counter];
		printf("output for element %d is %d\n", counter, output_array[counter]);
	}

		
return 0;	
}
