/* Yael Kelmer.
 This code asks the user to input an array with duplicate integers. The code then removes the duplicates and prints the new array.*/

#include <stdio.h>

int main ()
{
	printf ("Please insert the length of the array (how many integers you want in your list of integers)\n");
	int lengthArray;
	scanf ("%d", &lengthArray);
	printf ("Please insert the integers you want to be in the array (remember it has to match the length of the array). Insert duplicates of some integers and I will return an array without those duplicates. \n");

	int userArray [lengthArray];

	int i;
	int userInput;
	for (i= 0; i < lengthArray; i++) {
		scanf ("%d", &userInput);
		userArray [i] = userInput;
	}
	

	int newArray [lengthArray];
	int j;
	int newLength = 0;
	for (i = 0; i < lengthArray; i++) {
		int check = 0;
		for (j = 0; j < newLength; j++) {
			if (userArray [i] == newArray [j]) {
				check = 1;
				break;
			}	
		}
		if (check == 0) {
			newArray [newLength] = userArray [i];
			newLength++;
		}

	}
	
	printf ("This is your original array: [ ");
	for (i = 0; i < lengthArray; i++) {
		printf ("%d ", userArray [i]);
	}
	printf ("]\n");

	printf ("This is your new array: [ ");
	for (i = 0; i < newLength; i++) {
		printf ("%d ", newArray [i]);
	}
	printf ("]\n");


}
