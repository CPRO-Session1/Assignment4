#include <stdio.h>

int main(){
	int n;
	int i=0;
	int j=0;
	char ia[n];
	char jletter[52];
	int jtimes[52]={0};
	n<=100;
	printf("Please type in an array with only letters:\n");
	scanf("%c",&ia[n]);
	for(i=0;i<52;i++){
		for(j=0;j<52;j++){
		if(ia[i]==jletter[j])
		++jtimes[j];
		continue;
	}
	printf("\"%c\":\"%d\"\n",jletter[j],jtimes[j]);
	continue;
	}
	return 0;
}





