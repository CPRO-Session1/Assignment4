/* Matthew Danielson
*  7/4/16
*  narray.c
*  Takes the sum of elements of an array except the current element
*/

#include <stdio.h>

int main(){
	int array[5];
	int sum=0;
	printf("Please enter 5 integers. \n");
	for(int x = 0; x < 5; x++){
		scanf("%d", &array[x]);
		sum += array[x];
	}
	for(int x = 0; x < 5; x++){
		printf("%d \n", (sum - array[x]));
	}



}
