#include <stdio.h>

int main(){
	int n; // number of elements in array
	int a[n]; // creates an array
	int c = 0; // counter for elements in array
	int input; // input integer of user
	int doubles = 0; // counts doubles
	int c2; // 2nd counter for elements in array
	printf("How many elements are in your array?\n");
	scanf("%d", &n);
	printf("Enter your integers:\n");
	while (c != n){ // while there are not enough elements in array yet:
		scanf("%d", &input); // accepts integer input of user
		for (c2 = 0; c2 < n; c2++){ // checks each element in array for doubles
			if (a[c2] == input){ // if there is a double, set doubles to 1
				doubles = 1;
			}
		}
		if (doubles == 0){ // if there are no doubles:
			a[c] = input; // add input to array
			c ++; // increase count of number of elements
		}
		doubles = 0;
	}
	printf("Array:\n");
	for (c = 0; c < n; c++){ // prints array
		printf("%d\n",a[c]);
	}
	return 0;
}
