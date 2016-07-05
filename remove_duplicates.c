/*Ava N.*/
/*Write a program that takes an array as input, removes duplicates, and outputs that array. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {	
	int array_size = 5; /* Array size of 5 */
	int input_array[5];
	int output_array[5];
	int counter;
	int check=0;
	int duplicates=0;
	int source=0;	

	printf("\nInsert %d numbers into the array: \n", array_size);

	for(counter=0; counter<5; counter++)
	{	
		scanf("%d", &input_array[counter]); /* input numbers into array */

		printf("\n Numbers in the array: %d \n", input_array[counter]);
		break;
	}

	for(source=0; source < array_size; source++)	
	{
		for(check=source+1; check<array_size ;check++)
		{
			if(input_array[source]==input_array[check])
			{	
				input_array[check]=input_array[source];
				input_array[check]='\0';
				printf("Duplicate found! %d  %d \n",input_array[source],input_array[check]);
				printf("source and source+1 are:  %d   %d  \n",source,check);
				printf("The number of duplicates are: %d", input_array[source]);
			}		
		}	
	}
	printf("\nEnd Duplicate Check\n");

	for(counter = 0; counter < (array_size-duplicates+1); counter++) 
	{
		printf("%d", input_array[counter]);
	}

	printf("\n\nThe End!\n\n");
	return 0;	
}
