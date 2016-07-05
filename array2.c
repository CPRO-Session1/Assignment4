#include<stdio.h>

int main(){
	int i,j,k,n,x;
	printf("How long is the array? \n");
	scanf("%d",&n);
	int l[n];
	for (i=0;i<n;i++){
		printf("Please type your next number: ");
		scanf("%d",&l[i]);
	}
	for (x=0;x<2;x++){
		for (i=0;i<n;i++){
			for (j=i+1;j<n;j++){
				if (l[i]==l[j]){
					for (k=j;k<n-1;k++){
						l[k]=l[k+1];
					}
					n--;
				}
			}
		}
	}
	printf("After removing duplicates, your array is: \n");
	for (i=0;i<n;i++){
		printf("%d ",l[i]);
	}
	printf("\n");
}

