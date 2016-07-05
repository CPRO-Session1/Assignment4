#include <stdio.h>
/*remove doubles in an array
  @author Aly Milich
  */
int main(){

	int input[5] = {4, 5, 4, 5, 6};
	int output[5];

	int swap, i, j;


	for(i =0; i<5; i++){
		for(j=0; j<4; j++){
			if(input[j]>input[j+1]){
				swap = input[j];
				input[j] = input[j+1];
				input[j+1] = swap;
			}
		}
	}

	for(i=0; i<5; i++){
		if(input[i] != input[i-1])
			output[i] = input[i];
	}

	for(i=0; i<5; i++){
		if(output[i]!=0)
			printf("%d\n", output[i]);
	}


	return 0;
}
