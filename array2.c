/* Matthew Danielson
*  7/4/16
*  array2.c
*  Takes ints as input, removes duplicates, and prints what is left
*/

#include <stdio.h>

int main(){
	printf("How many integers would you like to enter?");
	int total;
	scanf("%d", &total);
	int nums[total];
	for(int x = 0; x< total; x++){
		printf("Enter an integer: \n");
		scanf("%d", &nums[x]);
	}
	for(int x = 0; x< total; x++){
		for(int y = 0; y< total; y++){
			if(nums[x] == nums[y] && x != y)
				nums[y] = '\0';//Prints as 0, but cannot be assigned as null.
			//Thus, will not print zero's
		}
		if(nums[x] != 0)
			printf("%d, ", nums[x]);

	}

}
