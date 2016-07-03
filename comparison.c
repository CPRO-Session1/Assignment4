#include <stdio.h>
/*Jack Rosen. The purpose is to remove the duplicates of the array and reput the array*/
int main()
{
	int amount, i = 0, j = 0;
	printf("How long would you like the array to be?\n");
	scanf("%d", &amount);
	char array1[amount];
	printf("What would you want in the array? \n");
	for(i = 0; i < amount; i++)
	{
		array1[i] = ' ';
	}
	i = 0;
	while (i < amount)
	{

		scanf("%c", &array1[i]);
		if (array1[i] == '\n')
		{
			array1[i] = getchar();
		}
			for (j = 0; j < i; j++)
			{
				if (i == j)
				{
					break;
				}
				else if (array1[i] == array1[j])
				{
					i--;
					amount--;
				}
			}
	i += 1;
	}
	i = 0;
	while (i < amount)
	{
		printf("%c", array1[i]);
		i++;
	}
	printf("\n");

	return 0;
}
