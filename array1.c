#include<stdio.h>

int main(){	
	int x;
	int sum=0;
	printf("How many numbers are you inputing? \n");
	scanf("%d", &x);
	int array[x];
	for(x=x-1;x>=0;x--){
		scanf("%d",&array[x]);
		sum=sum+array[x];
	}
	printf("The Sum is: %d \n" , sum);
}
