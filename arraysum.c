/* Christopher Liu - I didn't get the instructions so I'm not sure if I interpreted it correctly*/
#include <stdio.h>

int main()
{
	printf("Size of array: ");

	int array_size;
	scanf("%d", &array_size);

	int input_array[array_size], sum_array[array_size], sum = 0;

	for (int i = 0; i < array_size; i++)
	{
		printf("Input number at index %d: ", input_array[i]);
		scanf("%d", &input_array[i]);
		sum += input_array[i];
	}
	
	int ignored;
	printf("Ignore which index? ");
	scanf("%d", &ignored);
	sum -= input_array[ignored];

	for (int i = 0; i < array_size; i++)
	{
		sum_array[i] = sum;	
		printf("Value of array index %d: %d\n", i, sum_array[i]); 
	}
	return 0;
}
