#include <stdio.h>

int main(){
	int n; // number of elements
	int c; // counts index of arrays
	int input; // integer added by user
	printf("How many numbers would you like to add?\n");
	scanf("%d",&n); // used to specify length of array
	int a[n-1]; // array of elements
	printf("Enter your %d numbers:\n",n);
	for (c = 0; c != n; c++){ // adds integers to array
		scanf("%d", &input);
		a[c] = input;
	}
	int b[n-1]; // array for sum of elements
	int total = 0; // counts sum of integers
	printf("Cumulative value of array:\n");
	for (c = 0; c != n; c++){ // adds and prints integers
		b[c] = 0;
		total += a[c];
		b[c] = total;
		printf("%d\n",b[c]);
	}
	return 0;
}
