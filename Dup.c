//Clarke Littlejohn
//removes duplicates
//Couldn't get this one to work. I tried multiple differents ways and sometimes it would work someimtes it wouldn't.
#include<stdio.h>

int main(){
	int i=0;
	int j=0;
	int aryS;
	int tracker=0;

	printf("Enter the size of the array\n");
	scanf("%d",&aryS);
	int ary[aryS];
	printf("Now enter in a set of numbers and it will remove dupclicates from it.\n");
	for(;i<aryS;i++){
		scanf("%d",&ary[i]);
	}


	for(i=0;i<aryS;i++){
		for(j=i+1;j<aryS;j++){
			if(ary[i]!=ary[j]){
				tracker++;
			}
		}
	}
	int ary2[tracker];

	for(i=0;i<aryS;i++){
		for(j=i+1;j<aryS;j++){
			if(ary[i]==ary[j])
				break;
			ary2[i]=ary[i+1];
			i--;
			break;
		}
	}
	

	printf("\n");		
	for(i=0;i<tracker;){
		printf("%d\n",ary2[i]);
		i++;
	}
}
