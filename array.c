//Emma
//returning an arry with sum


#include <stdio.h>
#include <string.h>


int main(){

	int array[8]={1, 2, 5, 7, 7, 8, 10, 4};

	int out[8];

	int i;
	int sum =0;
	for(i=0; i<8;i++){
	
		sum = sum + array[i];
		
	}

	int j;
	int print;
	for(j=0; j<8;j++){
		
		out[j] = sum - array[j];



	}

	for(print=0; print<8; print++){
		printf("%d\n", out[print]);
	}

	return 0;

}
