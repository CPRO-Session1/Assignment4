//Bettina Benitez
#include <stdio.h>

int main() {
	int c; //counter
	int e; //number of elements
	int userin;
	int total = 0;
	printf("Number of elements?: ");
	scanf("%d", &e);
	int a[e-1]; //array with the number of elements (minus one because indicies starts at 0) in each index
	printf("Type a number then press enter until you've reached the desired number of elements:\n");
	for (c = 0; c < e; c++) {
		scanf("%d", &userin);
		total = total + userin;
		a[c] = total;
	}
	for (c = 0; c < e; c++) {
		printf("a[%d]: ", c);
		printf("%d\n", a[c]);
	}
	return 0;
}
