#include <stdio.h>
/* Jack Rosen. The purpose is to find out how many of each character were put*/
int main()
{
	int amount, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0, A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0, H = 0, I = 0, J = 0, K = 0, L = 0, M = 0, N = 0, O = 0, P = 0, Q = 0, R = 0, S = 0, T = 0, U = 0, V = 0, W = 0, X = 0, Y = 0, Z = 0;
	printf("How many characters do you want in the array?\n");
	scanf("%d", &amount);
	char array[amount];
	printf("What do you want to put into the array?\n");
	for (int i = 0; i < amount; i++)
	{
		scanf("%c",&array[i]);
		if (array[i] == '\n' || array[i] == ' ')
		{
			array[i] = getchar();
		}
		switch (array[i])
		{
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
			case 'k':
				k++;
				break;
			case 'l':
				l++;
				break;
			case 'm':
				m++;
				break;
			case 'n':
				n++;
				break;
			case 'o':
				o++;
				break;
			case 'p':
				p++;
				break;
			case 'q':
				q++;
				break;
			case 'r':
				r++;
				break;
			case 's':
				s++;
				break;
			case 't':
				t++;
				break;
			case 'u':
				u++;
				break;
			case 'v':
				v++;
				break;
			case 'w':
				w++;
				break;
			case 'x':
				x++;
				break;
			case 'y':
				y++;
				break;
			case 'z':
				z++;
				break;
			case 'A':
				A++;
				break;
			case 'B':
				B++;
				break;
			case 'C':
				C++;
				break;
			case 'D':
				D++;
				break;
			case 'E':
				E++;
				break;
			case 'F':
				F++;
				break;
			case 'G':
				G++;
				break;
			case 'H':
				H++;
				break;
			case 'I':
				I++;
				break;
			case 'J':
				J++;
				break;
			case 'K':
				K++;
				break;
			case 'L':
				L++;
				break;
			case 'M':
				M++;
				break;
			case 'N':
				N++;
				break;
			case 'O':
				O++;
				break;
			case 'P':
				P++;
				break;
			case 'Q':
				Q++;
				break;
			case 'R':
				R++;
				break;
			case 'S':
				S++;
				break;
			case 'T':
				T++;
				break;
			case 'U':
				U++;
				break;
			case 'V':
				V++;
				break;
			case 'W':
				W++;
				break;
			case 'X':
				X++;
				break;
			case 'Y':
				Y++;
				break;
			case 'Z':
				Z++;
				break;
		}
	}
	if (A != 0)
	{
		printf("A = %d\n", A);
	}
	if (a != 0)
	{
		printf("a = %d\n", a);
	}
	if (B != 0)
	{
		printf("B = %d\n", B);
	}
	if (b != 0)
	{
		printf("b = %d\n", b);

	}
	if (C != 0)
	{
		printf("C = %d\n", C);
	}
	if (c != 0)
	{
		printf("c = %d\n", c);
	}
	if (D != 0)
	{
		printf("D = %d\n", D);
	}
	if (d != 0)
	{
		printf("d = %d\n", d);
	}
	if (E != 0)
	{
		printf("E = %d\n", E);
	}
	if (e != 0)
	{
		printf("e = %d\n", e);
	}
	if (F != 0)
	{
		printf("F = %d\n", F);
	}
	if (f != 0)
	{
		printf("f = %d\n", f);
	}
	if (G != 0)
	{
		printf("G = %d\n", G);
	}
	if (g != 0)
	{
		printf("g = %d\n", g);
	}
	if (H != 0)
	{
		printf("H = %d\n", H);
	}
	if (h != 0)
	{
		printf("h = %d\n", h);
	}
	if (I != 0)
	{
		printf("I = %d\n", I);
	}
	if (i != 0)
	{
		printf("i = %d\n", i);
	}
	if (J != 0)
	{
		printf("J = %d\n", J);
	}
	if (j != 0)
	{
		printf("j = %d\n", j);
	}
	if (K != 0)
	{
		printf("K = %d\n", K);
	}
	if (k != 0)
	{
		printf("k = %d\n", k);
	}
	if (L != 0)
	{
		printf("L = %d\n", L);
	}
	if (l != 0)
	{
		printf("l = %d\n", l);
	}
	if (M != 0)
	{
		printf("M = %d\n", M);
	}
	if (m != 0)
	{
		printf("m = %d\n", m);
	}
	if (N != 0)
	{
		printf("N = %d\n", N);
	}
	if (n != 0)
	{
		printf("n = %d\n", n);
	}
	if (O != 0)
	{
		printf("O = %d\n", O);
	}
	if (o != 0)
	{
		printf("o = %d\n", o);
	}
	if (P != 0)
	{
		printf("P = %d\n", P);
	}
	if (p != 0)
	{
		printf("p = %d\n", p);
	}
	if (Q != 0)
	{
		printf("Q = %d\n", Q);
	}
	if (q != 0)
	{
		printf("q = %d\n", q);
	}
	if (R != 0)
	{
		printf("R = %d\n", R);
	}
	if (r != 0)
	{
		printf("r = %d\n", r);
	}
	if (S != 0)
	{
		printf("S = %d\n", S);
	}
	if (s != 0)
	{
		printf("s = %d\n", s);
	}
	if (T != 0)
	{
		printf("T = %d\n", T);
	}
	if (t != 0)
	{
		printf("t = %d\n", t);
	}
	if (U != 0)
	{
		printf("U = %d\n", U);
	}
	if (u != 0)
	{
		printf("u = %d\n", u);
	}
	if (V != 0)
	{
		printf("V = %d\n", V);
	}
	if (v != 0)
	{
		printf("v = %d\n", v);
	}
	if (W != 0)
	{
		printf("W = %d\n", W);
	}
	if (w != 0)
	{
		printf("w = %d\n", w);
	}
	if (X != 0)
	{
		printf("X = %d\n", X);
	}
	if (x != 0)
	{
		printf("x = %d\n", x);
	}
	if (Y != 0)
	{
		printf("Y = %d\n", Y);
	}
	if (y != 0)
	{
		printf("y = %d\n", y);
	}
	if (Z != 0)
	{
		printf("Z = %d\n", Z);
	}
	if (z != 0)
	{
		printf("z = %d\n", z);
	}
	return 0;
}
