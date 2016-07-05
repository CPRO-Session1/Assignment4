//Anya Lauria 
// Frequency of characters 
#include <stdio.h>
#include <string.h>
int main() 
{

char words[100];
int x = 0, alph[26] = {0}; 

printf("Enter string \n");
gets(words);

while (words[x] != '\0')
{
	if (words[x] >= 'a' && words[x] <= 'z')
                alph[words[x] - 'a']++;
	if (words[x] >= 'A' && words[x] <= 'Z')
		alph[words[x] - 'A']++;
        x++;
}

for(x=0;x<26;x++)
{
	if (alph[x] != 0){
		printf("%c : %d \n",x + 'a', alph[x]);
	}
}
return 0;
}
