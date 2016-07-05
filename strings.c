/* Matthew Danielson
*  7/4/16
*  strings.c
*  returns character frequency
*/

#include <stdio.h>
#include <string.h>

int main(){
	printf("How long wil your string be?");
	int length;
	scanf("%d", &length);
	char chars[length+1];
	printf("Please enter a string:"); 	
	for(int x= 0; x< sizeof(chars); x++)
		scanf("%c",&chars[x]);
	int sum;
	for(int x = 1; x<sizeof(chars)-1; x++){
		sum = 1; 
		for(int y = 0; y< sizeof(chars); y++){
			if(chars[x] == chars[y] && x !=y){
				sum ++;
				chars[y] = 0;
			}
		}
		if((chars[x]> 65 && chars[x] < 90) ||( chars[x] >97 && chars[x] <122));
			printf("%c: %d \n", chars[x], sum);
	}

	return 0;
}
