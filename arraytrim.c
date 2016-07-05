/* Christopher Liu - I wasn't sure how to delete a value from an array so I just set it to zero. Sorry */
#include <stdio.h>

int main()
{
	printf("Size of array: ");

	int array_size;
	scanf("%d", &array_size);

	int input_array[array_size], trimmed_array[array_size];

	for (int i = 0; i < array_size; i++)
	{
		printf("Input number at index %d: ", input_array[i]);
		scanf("%d", &input_array[i]);
		trimmed_array[i] = input_array[i];
	}
	
	for (int i = 0; i < array_size; i++)
	{
		for (int j = 0; j < array_size; j++)
		{
			printf("%d:%d i, %d:%d j\n", i, input_array[i], j, input_array[j]);
			if (input_array[i] == input_array[j] && i != j)
			{
				trimmed_array[i] = 0;	
			}
		}
		printf("Value of array index %d: %d\n", i, trimmed_array[i]); 
	}
	return 0;
}
