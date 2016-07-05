#include <stdio.h>

int main()
{
	printf("How long is the array?\n");
	int n;
	scanf("%d", &n);
	int first[n];
	printf("Time to populate the array!\n");
	for (int a = 0; a < n; a++) //Populates the array
	{
		printf("Integer %d?\n", a);
		scanf("%d", &first[a]);
	}
	for (int b = 0; b < n; b++) //Goes one-by-one for each int in the array
	{
		for (int c = b + 1; c < n; c++) 
		{
			if (first[c] == first[b]) //Checks the rest of the ints in array for dups and removes them
				first[c] = 0;
		}
	}
	for (int d = 0; d < n; d++) //Prints the altered array
	{
		printf("%d ", first[d]);
	}
	return 0;
}

