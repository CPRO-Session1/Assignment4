/*Lloyd Page*/
/*Hang man game with ASCII art, rand word/userinputed word, repeatable*/
/*Bus error when repeating only in linux*/
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char y=' ';
	do
	{
		char handler[100];
		int choice;
		int size=10;
		char word[100];
		while(1)
		{
			printf("1.computer\n2.2player\n");
			fgets(handler,sizeof(handler),stdin);
			if(sscanf(handler,"%d",&choice)&&choice>0&&choice<3)
				break;
			printf("Enter a valid choice\n");
		}
		if(choice==1)
		{
			strcpy(word,"z");
			srand(time(0));
			int r=rand()%10;
			switch(r)
			{
				case 0:
				strcpy(word,"chicken is a fun programming language");
				break;
				case 1:
				strcpy(word,"a is ninety seven");
				break;
				case 2:
				strcpy(word,"american standard code for information exchange");
				break;
				case 3:
				strcpy(word,"unicode consortium");
				case 4:
				strcpy(word,"universal transformation format");
				break;
				case 5:
				strcpy(word,"gnu not unix");
				break;
				case 6:
				strcpy(word,"multiplexed information and computing system");
				break;
				case 7:
				strcpy(word,"linus torvald's unix");
				break;
				case 8:
				strcpy(word,"a brainfuck compilier uses only one hundred bytes");
				break;
				case 9:
				strcpy(word,"use shakespeare programming language to confuse english majors to the next level");
				break;
				default:
				strcpy(word,"computer broken");
			}
		}
		if(choice==2)
		{
			printf("Enter your word/phrase\n");
			fgets(word,sizeof(word),stdin);
			word[strlen(word)]='\0';
		}
		char out[strlen(word)];
		for(int i=0;i<sizeof(word);i++)
		{
			if(word[i]!=' ')
				out[i]='_';
			else
				out[i]=' ';
		}
		char guess[6];
		for(int i=0;i<sizeof(guess);i++)
			guess[i]=' ';
		char z='0';
		int count=0;
		int g=0;
		int tracker=0;
		while(strcmp(word, out)!=0)
		{
			switch(g)
			{
				case 0:
				printf(" ___\n |  |\n    |\n    |\n    |\n");
				break;
				case 1:
				printf(" ___\n |  |\n O  |\n    |\n    |\n");
				break;
				case 2:
				printf(" ___\n |  |\n O  |\n |  |\n    |\n");
				break;
				case 3:
				printf(" ___\n |  |\n O  |\n |  |\n  \\ |\n");
				break;
				case 4:
				printf(" ___\n |  |\n O  |\n |  |\n/ \\ |\n");
				break;
				case 5:
				printf(" ___\n |  |\n_O  |\n |  |\n/ \\ |\n");
				break;
			}
			for(int i=0;i<sizeof(out);i++)
			{
				printf("%c",out[i]);
			}
			printf("\n");
			printf("Wrong characters:\n");
			for(int i=0;i<g;i++)
				printf("%c\n",guess[i]);
			printf("Enter a character\n");
			scanf(" %c",&z);
			while(getchar()!='\n');
			for(int i=0;i<sizeof(out);i++)
			{
				if((word[i]==z)||(word[i]>64&&word[i]<91&&word[i]+32==z)||(word[i]>96&&word[i]<123&&word[i]-32==z))
				{
					out[i]=word[i];
					count++;
				}
				if(word[i]==out[i])
					tracker++;
			}
			if(count==0)
			{
				guess[g]=z;
				g++;
			}
			if(tracker==sizeof(out))
				break;
			tracker=0;
			if(g==6)
				break;
			count=0;
		}
		if(g==6)
		{
			printf(" ___\n |  |\n_O_ |\n |  |\n/ \\ |\n");
			printf("%s\n",word);
			printf("you lose\n");
		}
		else
		{
			if(g>6)
				printf("computer broken");
			else
				printf("you win with %d errors\n",g);
		}
		printf("Would you like to play again?(y/n)\n");
		y=getchar();/*bus error occurs here only when a repeat is attempted*/
		fgets(handler,sizeof(handler),stdin);
	}while((y=='y')||(y=='Y'));
	return 0;
}
