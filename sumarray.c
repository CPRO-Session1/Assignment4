/*Rumeet Goradia - Sum of Elements*/
#include <stdio.h>
int main ()
{
	int n;
	printf("How many elements do you want in your array?\n");
	scanf("%d", &n);
	int input[n], output[n];
	int sum=0;
	int i, j;
	printf("Please enter the %d elements of your array.\n", n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&input[i]);
		sum=sum+input[i];
	}
	printf("Output array:\n[");
	for (j=0;j<n;j++)
	{
		output[j]=sum-input[j];
		printf("%d",output[j]);
		if (j<(n-1))
			printf(", ");
	}
	printf("]\n");
	return 0;
}


