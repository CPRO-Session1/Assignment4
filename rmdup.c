/*Lloyd Page*/
/*removes duplicates from an inputed array of a basic data type and outputs it, repeatable*/
/*Complexity: n(n+n+n+n^2+n)=O(n^3)*/
#include <stdio.h>
int main()
{
	int select;
	int size;
	char handler[100];
	char y;
	do
	{
		while(1)
		{
			printf("select your data type \n1.Integer\n2.Float\n3.Character\n");
			fgets(handler,sizeof(handler),stdin);
			if((sscanf(handler,"%d",&select))&&((select>0)&&(select<4)))
			{
				break;
			}
			printf("You failed to enter a valid number\n");
		}
		while(1)
		{
			printf("Enter size of array: \n");
			fgets(handler,sizeof(handler),stdin);
			if(sscanf(handler,"%d",&size))
				break;
			printf("you failed to enter a number\n");
		}
		if(select==1)/*Implementation for int*/
		{
			int in[size];
			for(int i=0;i<size;i++)
			{
				printf("Enter your number\n");
				fgets(handler,sizeof(handler),stdin);
				if(sscanf(handler,"%d",&in[i])) ;
				else
				{
					printf("You did not enter an integer\n");
					i--;
				}
			}
			int k=size-1;
			int out[size];
			int tempsize=size;
			for(int i=size-1;i>-1;i--)
			{
				for(int j=0;j<i;j++)
				{
					if(in[i]==in[j])
					{
						k++;
						tempsize--;
						break;
					}
				}
				out[k]=in[i];	
				k--;
			}
			tempsize=size-tempsize;
			for(int i=size-1;i>tempsize-1;i--)
				printf("%d\n",out[i]);
		}
		if(select==2)
		{
			float in[size];
			for(int i=0;i<size;i++)
			{
				printf("Enter your float\n");
				fgets(handler,sizeof(handler),stdin);
				if(sscanf(handler,"%f",&in[i])) ;
				else
				{
					printf("You did not enter an float\n");
					i--;
				}
			}
			int k=size-1;
			float out[size];
			int tempsize=size;
			for(int i=size-1;i>-1;i--)
			{
				for(int j=0;j<i;j++)
				{
					if(in[i]==in[j])
					{
						k++;
						tempsize--;
						break;
					}
				}
				out[k]=in[i];	
				k--;
			}
			tempsize=size-tempsize;
			for(int i=size-1;i>tempsize-1;i--)
				printf("%g\n",out[i]);
		}
		if(select==3)
		{
			char in[size];
			for(int i=0;i<size;i++)
			{
				printf("Enter your character\n");
				fgets(handler,sizeof(handler),stdin);
				if(sscanf(handler,"%c",&in[i])) ;
				else
				{
					printf("You did not enter an integer\n");
					i--;
				}
			}
			int k=size-1;
			char out[size];
			int tempsize=size;
			for(int i=size-1;i>-1;i--)
			{
				for(int j=0;j<i;j++)
				{
					if(in[i]==in[j])
					{
						k++;
						tempsize--;
						break;
					}
				}
				out[k]=in[i];	
				k--;
			}
			tempsize=size-tempsize;
			for(int i=size-1;i>tempsize-1;i--)
				printf("%c\n",out[i]);
		}
		printf("would you like to run it again?(y/n)");
		y=getchar();
		fgets(handler,sizeof(handler),stdin);
	}while((y=='y')||(y=='Y'));
	return 0;	
}
