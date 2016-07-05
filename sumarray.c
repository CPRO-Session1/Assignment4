/*Lloyd Page*/
/* user inputed array where the index is equal to the sum of all other items in it except what's in the current index with repeatability*/
/*O(n^3)*/
#include<stdio.h>
int main()
{
	char handle[100];
	int size;
	char y;
	do
	{
		while(1)
		{
			printf("Enter the size of the array\n");
			fgets(handle,sizeof(handle), stdin);
			if(sscanf(handle, "%d",&size))
				break;
			printf("You did not enter a valid number\n");
		}
		int in [size];
		int sum=0;
		for(int i=0;i<size;i++)
		{
			while(1)
			{
				printf("Enter the next number in the array\n");
				fgets(handle, sizeof(handle), stdin);
				if(sscanf(handle,"%d",&in[i]))
					break;
				printf("You did not enter a valid number\n");
			}
			sum+=in[i];
		}
		int out[size];
		printf("The Numbers now in the array are: ");
		for(int i=0;i<size;i++)
		{
			out[i]=sum-in[i];
			printf("%d, ",out[i]);
		}
		printf("\n");
		printf("would you like to run this again?(y/n)\n");
		scanf("%c",&y);
		fgets(handle, sizeof(handle), stdin);
	}while((y=='y')||(y=='Y'));
	return 0;

}
