#include <stdio.h>

int main(){
	int n,x;
	int i=0;
	int j=1;
	int iarray[n];
	printf("Please type in an array:\n");
	scanf("%d",&iarray[n]);
	for(i=0;i<n;i++){
		for(j=i+1;j<=n;j++){
			if(iarray[i]>iarray[j]){
				x=iarray[j];
				iarray[j]=iarray[i];
				iarray[i]=x;
			}
			continue;
		}}
	for(i<0;i<n;i++){
		if(i>0&&iarray[i-1]==iarray[i]){
			break;}
		printf("%d ",iarray[i]);
	}
	return 0;
}


				

