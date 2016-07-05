
#include<stdio.h>
int main(){
	char string[1000];
	int x;
	int freq[256] = {0};
	printf("Please type in your string. \n");
	gets(string);
	for (x=0; string[x]!='\0';x++){
		freq[string[x]]++;
	}
	for (x=0;x<256;x++){
		if (freq[x]!=0){
			printf("%c: %d times \n", x, freq[x]);
		}
	}
}
