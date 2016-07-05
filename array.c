#include <stdio.h>
#include <string.h>

int main(){
	int n;
	int i=0;
	int sum=0;
	int inumbers[n];
	int inew[n];

	printf("Please enter a group of number:");
	scanf("%u ",&inumbers[n]);

	while(i<n){
		sum += (int) inumbers[i];
	//	printf("sum=%d",sum);
		i++;
	//	printf("i=%d",i);
		continue;
	}
	//printf("sum=%d",sum);

	inew[i]= sum - inumbers[i];
	printf("%u",inew[n]);

	return 0;
}


