//Emma Ladouceur
//counts the occurence of letters in a string
//I feel like I'm close in this one but it was printing before and now it won't. I tried debugging and it compiles, but it doesn't go further than that. I'll finish all of these things after class, but I think i need some ideas, so maybe we'll go over it. Otherwise I'll just work on it more tomorrow, but I've spent about 4 hours on these last two. 
// I do know that it's not recognizing the increases when you type in strings or the switch statement because I added an a++ at the bottom and it prints a:100, but i don't know how to fix it. 
#include <stdio.h>


int main(){

int a=0, b=0, c=0, d=0, e=0,f=0,g=0,h=0,i=0,j=0,k=0,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z;

int print;

int ii;
int occur=100;
char string[occur];
	
printf("Enter a string of characters");
scanf("%c", &string[occur]);

	for(ii=0; ii<occur; ii++)
	{
		switch(string[ii]){
	
			case 'a':
			a++;
			break;

			case 'b':
			b++;
			break;

			case 'c':
			c++;
			break;

			case 'd':
			d++;
			break;

			case 'e':
			e++;
			break;

			case 'f':
			f++;
			break;
			
			case 'g':
			g++;
			break;

			case 'h':
			h++;
			break;

			case 'i':
			i++;
			break;

			case 'j':
			j++;
			break;
		}

	a++;	

	}



	if(a>0){
		printf("a : %d\n", a);
	}
	if(b>0){
		printf("b : %d\n", b);
	}
	if(c>0){
		printf("c : %d\n", c);
	}

	if(d>0){
		printf("c : %d\n", d);
	}

	if(e>0){

		printf("e : %d\n", e);
	}

	if(f>0){
		printf("f : %d\n", f);
	}

	if(g>0){
		printf("g : %d\n",g);
	}

	if(h>0){
		printf("h : %d\n", h);

	}

	if(i>0){
		printf("i : %d\n", i);
	}

	if(j>0){
		printf("j : %d\n", j);
	}



	return 0;

}


