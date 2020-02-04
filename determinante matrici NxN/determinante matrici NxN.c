#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int input_int(char *printf_string)
{
	int value;
	printf_s("%s\n",printf_string);
	scanf_s("%d", &value);
	return value;
}


int main()
{
	const int riga_matrice = input_int("Inserisci la dimensione della riga della matrice");
	const int colonna_matrice= input_int("Inserisci la dimensione della colonna della matrice");
	int banana [riga_matrice][colonna_matrice];
	printf_s("È IL MOMENTO DI RIEMPIRE LA MATRICE STRONZO\n");
	for (int i;i<riga_matrice;i++)
	{
		for (int j;j<colonna_matrice;j++)
		{
			
		}
	}
}
