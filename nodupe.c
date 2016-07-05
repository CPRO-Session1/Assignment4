//Anya Lauria

#include <stdio.h>
#include <stdbool.h>

int main()
{

int nelems;	
printf("Enter the size of your array\n");
scanf("%d", &nelems);
int i;	
int l[nelems];
for(i=0;i<nelems;i++){
	printf("Enter number:\n");
	scanf("%d", &l[i]);
}



for(int m=0;m<nelems;m++)
{
	bool wase = 0;
	for(int n=0;n<nelems && m>n;n++)
	  
	{
		if (l[m] == l[n]
			&& m != n)
				wase = 1;
	}
          if (wase == 0){
		  printf("\n%d", l[m]);
                  }

}

return 0;
}
