#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int input_int(char *stringa)
{
	int var;
	printf_s(stringa);
	scanf_s("%d", &var);
		return var;
}

int input_char(char* stringa)
{
	int var;
	printf_s(stringa);
	scanf_s(" %c", &var,1);
	return var;
}

int main()
{
	char a, b, c;
	a = input_char("Inserisci a\n");
	b = input_char("Inserisci b\n");
	c = input_char("Inserisci c\n");
	int int_a = (int)a, int_b = (int)b, int_c = (int)c;

	if (a>b)
	{
		if (b>c) //a>b>c
		{
			putchar(a);
			putchar(b);
			putchar(c);
		}
		else if (a > c) {

			putchar(a);
			putchar(c);
			putchar(b);
		}
		else
		{
			putchar(c);
			putchar(a);
			putchar(b);
		}
		
	}
	else
	{
		if (a > c) //b>a>c
		{
			putchar(b);
			putchar(a);
			putchar(c);
		}
		else if(b > c) {  //b>c>a
			
			putchar(b);
			putchar(c);
			putchar(a);
		}
		else //c>b>a
		{
			putchar(c);
			putchar(b);
			putchar(a);
		}
	}
	
}