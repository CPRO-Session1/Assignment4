#include <stdio.h>
/*Jack Rosen. The purpose is to add all of the numbers except the number in the array and put it in its place.*/
int main()
{
	int amount, sum;
	printf("How many numbers do you want in your array\n");
	scanf("%d", &amount);
	int input[amount], output[amount];
	printf("Print the numbers below\n");
	for (int inputAmount = 0; inputAmount < amount; inputAmount ++)
	{
		scanf("%d", &input[inputAmount]);
	}
	for (int i = 0; i < amount; i++)
	{
		sum = 0;
		for (int j = 0; j < amount; j++)
		{
			if (j == i)
			{
				continue;
			}
			sum += input[j];
		}
		output[i] = sum;
		printf("%d\n", output[i]);
	}
	return 0;
}
