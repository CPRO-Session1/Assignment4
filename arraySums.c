#include <stdio.h>

int main() 
{
	printf("How many integers are in the array?\n");
	int n;
	scanf("%d", &n);
	int first[n];
	printf("Time to populate the array.\n");
	for (int i = 0; i < n; i++) //Populates first array 
	{
		printf("Integer %d?\n", i);
		scanf("%d", &first[i]);
	}
	int second[n];
	for (int cIsGarbage = 0; cIsGarbage < n; cIsGarbage++) //Sets all values in second array to 0
	{
		second[cIsGarbage] = 0;
	}
	for (int j = 0; j < n; j++) //Populates the second array
	{
		for (int k = 0; k < n; k++)
		{
			if (k != j) //Checks so the value you're at in first[] isn't counted 
			{
				second[j] += first[k];
			}
		}
	}
	printf("Here's the first array:\n");
	for (int l = 0; l < n; l++) //prints first array values
	{
		printf("%d ", first[l]);
	}
	printf("\nHere's the second array:\n");
	for (int m = 0; m < n; m++) //prints second array values
	 {
	 	printf("%d ", second[m]);
	 }
	return 0;
}
				

