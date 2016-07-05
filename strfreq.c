#include <stdio.h>
#include <string.h>
int main ()
{
	char input[100];
	int i=0, j, k;
	printf("Enter a string of characters: ");
	do{
		input[i]=getchar();
		i++;
	}while(input[i-1]!='\n');
	for (j=0;j<(strlen(input)-1);j++)
	{
		int counter = 0;
		for (k=j; k<(strlen(input)-1); k++)
		{
			if (input[j]==input[k]&&input[k]!='!')
			{
				counter++;
				if (k!=j)
					input[k]='!';
				
			}
		}
		if (input[j]!='!')
			printf("%c = %d\n", input[j], counter);
		
	}/*changing values to ! removes duplicates*/
		
	return 0;
}
