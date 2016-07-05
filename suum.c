//Anya Lauria 
// Sum of elements 

#include <stdio.h>

int main()
{

int n;
int x;
int y;
int sum = 0; 
int dummy; 

printf("Enter the size of your array\n");
scanf("%d", &n);
printf("Size is %d\n", n); 
int inputar[1000];
int outputar[1000];


printf("You may enter elements you want in the array\n");
for(x=0;x<n;x++)
{
	scanf("%d", &dummy);
	inputar[x] = dummy; 
	sum = sum + inputar[x];
}
for(y=0;y<n;y++)

{
	outputar[y] = sum - inputar[y];
	printf("\n%d", outputar[y]);
}

return 0; 

}

