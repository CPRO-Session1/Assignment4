//Emma Ladouceur
//This does not work! 
//I've tried so many things but cannot figure it out. I honestly don't know what else to try so if we could go over after class I would really appreciate it 
//It compiles and prints 6 things, but ideally it would 1 only print 3 and 2 it would be the correct 3 things
//on the bright side, nothing is negative anymore and it does compile
#include <stdio.h>


int main(){
	int number, i, k, h, j;
	int arr1[6] = {1,1,2,2,3,3};
	int arr2[6];

	arr1[6] = arr2[6];
	for(i=0; i<6; i++){
		for(j=0;j<6;j++){
			if(arr1[i]==arr1[j]){
				break;
			}

			if(i==j){
				arr1[i]=arr1[j];
				i--;
			}
		}

	}


	
	for(k=0; k<6; k++){
		printf("%d\n", arr2[k]);
	}


return 0;
}
