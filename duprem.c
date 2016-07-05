/*Rumeet Goradia - Duplicate Remover*/
#include <stdio.h>
int main()
{
	int size;
	printf("How many numbers do you want to enter?\n");
	scanf("%d", &size);
	int input[size];
	int i, j, end, x; 
	end=0;
	printf("Please enter your %d numbers.\n",size);
	for(i=0;end<size;i++)
	{

		scanf("%d",&input[i]);
		if (i>0)
		{
			for (j=0; j<i; j++)
			{
				if (input[i]==input[j])
				{
					i--;
				}
			}/*scans through all previous entries of array, and if it detects a duplicate, lowers value of i so next input is replaces current input*/
		}
		end++;
	}
	printf("The numbers you inputted (excluding duplicates):\n");
	for (x=0;x<i;x++)
	{
		printf("%d\n",input[x]);
	}
	return 0;
}
	

