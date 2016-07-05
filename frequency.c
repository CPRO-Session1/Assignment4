/*Lloyd Page*/
/*input string, return frequency without printing zeros, repeatability, uses heap sort*/
/*Complexity is n(n^2+nlog(n))+C==O(n^3), which is smaller than all other implementations I could think up of while maintaing repeatability*/
#include <stdio.h>
#include<string.h>
int main()
{
	char y;
	do
	{
		char s[100];
		char comp[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
		int size,i,j,t,root;
		char temp;
		printf("Enter your string: \n");
		fgets(s,sizeof(s),stdin);
		s[strlen(s)-1]='\0';
		size=strlen(s);
		for(i=1;i<size;i++)/*start of heap sort*/
		{
			t=i;
			do
			{
				root=(t-1)/2;
				if(s[root]<s[t])
				{
					temp=s[root];
					s[root]=s[t];
					s[t]=temp;
				}
				t=root;
			}while(t!=0);
		}
		for(j=size-1;j>=0;j--)
		{
			temp=s[0];
			s[0]=s[j];
			s[j]=temp;
			root=0;
			do
			{
				t=root*2+1;
				if((s[t]<s[t+1])&&t<j-1)
					t++;
				if((s[root]<s[t])&&t<j)
				{
					temp=s[root];
					s[root]=s[t];
					s[t]=temp;
				}
				root=t;
			}while(t<j);	
		}/*End of heap sort*/
		int start=0;
		for(i=0;i<sizeof(comp);i++)
		{
			int count=0;
			for(j=start;j<=size;j++)
			{
				if(s[j]==comp[i])
				{
					count++;
					start++;
				}
				else
				{
					if(count>0)
					printf("%c = %d\n",comp[i],count);
					break;
				}
			}
		}
		printf("Would you like to run again?(y/n)");
		y=getchar();
		fgets(s,sizeof(s),stdin);
	}while((y=='Y')||(y=='y'));
	return 0;
}
