/*Ava N.*/
/*Write a program that takes a string of characters and returns the frequency of each character in that string. For characters not in the string, nothing should be printed.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
        char input_string[98];       /*input string*/
        char alpha_string[51]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
        int str_counter; 
        int alpha_counter; 
        int input_char;
        int duplicate_count[51] = {0};

        printf("Enter a character string less than 100 characters:");

        scanf("%s",input_string);  

/*      printf("Your input string is: %s \n", input_string);
	printf("input string 0 is: %c\n", input_string[0]);
	printf("input_string 1 is: %c\n", input_string[1]);

*/

       for (str_counter = 0; input_string[str_counter] != '\0'; str_counter++)
        {

               for (alpha_counter = 0; alpha_counter < 52; alpha_counter++)

        {

               if (input_string[str_counter] == alpha_string[alpha_counter])
                       duplicate_count[alpha_counter]++;
        }
	}

/*	printf("Letter a in duplicate counter array %d\n\n",duplicate_count[0]);  */


   for (alpha_counter = 0; alpha_counter < 52; alpha_counter++)

   {
	if (duplicate_count[alpha_counter] >= 1)
	printf("%c was found %d times.\n",alpha_string[alpha_counter],duplicate_count[alpha_counter]);
   }
   return 0;	
}
