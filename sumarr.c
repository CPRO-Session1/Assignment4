#include <stdio.h>

int main(){
	
	int arr[5] = {1, 2, 3, 5, 6};
	int output[5];

	int i, sum;

	for(i =0; i<5; i++)
		sum = sum + arr[i];

	for(int j =0; j<5; j++)
		output[j] = sum-arr[j];

	for(int k=0; k<5; k++)
		printf("%d\n", output[k]);

	return 0;

}
