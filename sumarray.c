/*Yael Kelmer.
  This code takes a user inputed array and outputs an array of the sum of all the integers in the array execpt for the indexed integer*/

#include <stdio.h>

int main ()
{

	printf ("Please insert the length of the array (how many integers you want in your list of integers)\n");
	int lengthArray;
	scanf ("%d", &lengthArray);
	printf ("Please insert the integers you want to be in the array (remember it has to match the length of the array) \n");
	
	int userArray [lengthArray];

	int i;
	int userInput;
	for (i = 0; i < lengthArray; i++) {
		scanf ("%d", &userInput); 
		userArray [i] = userInput;
	}
	

	int outputArray [lengthArray];
	
	int j;
	int sum = 0;
	for (j = 0; j < lengthArray; j++) {
		sum = sum + userArray [j];
	}

	for (i = 0; i < lengthArray; i++) {
		outputArray [i]  = sum - userArray [i];
		
	}
	
	printf ("This is your input array: [ ");
	for (i = 0; i < lengthArray; i++) {
		printf ("%d ", userArray [i]);
	}
	printf ("]\n");

	printf ("This is your ouput array: [ ");
	for (i = 0; i < lengthArray; i++) {
		printf ("%d ", outputArray [i]);
	}
	printf ("]\n");

}
