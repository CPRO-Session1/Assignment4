//Clarke Littlejohn
//Arraysum of previous elements
//i am not sure if this correct code

#include<stdio.h>


int main(){
		
	int arraySize;
	printf("This program will give you the sum of the the prevouis elements in the array.\nEnter number to set the size of the Array.");
	scanf("%d",&arraySize);
	int array1 [arraySize];
	int array2 [arraySize];
	int i=0;
	int j,sum;
	printf("Now enter the values you want to be summed.\n");
	

		while(i<arraySize){
			scanf("%d",&array1[i]);
			i++;
		}
	
		
		for(i=0;i<arraySize;i++){
			sum=0;
			for(j=0;j<arraySize;j++){
				if(i!=j){
					sum+=array1[j];
				}
			}
			array2[i]=sum;
		}

		
		for(i=0;i<arraySize;i++){
			printf("%d\t",array2[i]);
		}

}

