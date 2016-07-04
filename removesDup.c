#include <stdio.h>

int main(){
	printf("How many elements are in your array?\n");
	int n; // number of elements in array
	scanf("%d", &n);
	printf("Enter your integers:\n");
	int a[n]; // creates an array
	int c = 0; // counter for elements in array
	int input; // input integer of user
	int doubles = 0; // counts doubles
	int c2; // 2nd counter for elements in array
	while (c != n){
		scanf("%d", &input);
		for (c2 = 0; c2 < n; c2++){ // checks each element in array for doubles
			if (a[c2] == input){
				doubles = 1;
			}
		}
		if (doubles == 0){
			a[c] = input;
			c ++;
		}
		doubles = 0;
	}
	printf("Array:\n");
	for (c = 0; c < n; c++){
		printf("%d\n",a[c]);
	}
	return 0;
}
