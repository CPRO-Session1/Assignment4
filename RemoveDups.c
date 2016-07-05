//Bettina Benitez
//Sorry Lesley I tried really hard!! but this assignment was too hard :(
#include <stdio.h>

int main () {
	int userin, c, i, j, num; // variables
	int dup = 0; // duplicate counter
	printf("Number of inputs: "); //promt for n of inputs
	scanf("%d", &num); 
	int a[num]; // array
	printf("What numbers: ");
	for (c = 0; c < num; c++) { //for every c until the n of inputs ask for an integer
		scanf("%d", &userin);
		for (i = 0; i < num; i++) { // for each of those, check if there are any of the same
			if (a[c] == userin) {
				dup = 1;
			}
		}
	}
		if (dup == 0) {
			a[j] = a[c];
		}
	for (j = 0; j < num; j++) {
		printf("%d\n", a[j]);
	}
	return 0;
}
