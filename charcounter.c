//Clarke Littlejohn
// When entering a clk it works a intended but when entering asd it doesnt seem it work i cant figure out why.


#include<stdio.h>


int main(){

	char str[100];
	char alphabet[52];
	int i,counter2;
	int charC [52];
	char userIn;
	for(i=0;i<53;i++){
		charC[i]=0;
	}
	//fills the alphabet array
	for(i=65;i<(65+26);i++){
		alphabet[i-65]=i;
	}
	for(i=97;i<(97+26);i++){
		alphabet[i-71]=i;
	}
	
	printf("Enter in a string.\n");
	fgets(str,sizeof(str),stdin);
	//suppose to increase the char Counter 
	for(i=0;i<26;i++){
			
			for(counter2=25;counter2<51;counter2++){
				if(alphabet[counter2]==str[i])
					charC[counter2]++;
			}
			for(counter2=0;counter2<27;counter2++){
				if(alphabet[counter2]==str[i])
					charC[counter2]++;
			}
	}			

	for(i=0;i<26;i++){
		if(charC[i]!=0)
		printf("%c = %d\n",alphabet[i],charC[i]);

		if(charC[i+26]!=0)
		printf("%c = %d\n",alphabet[i+26],charC[i+26]);
	}
	

}
	
