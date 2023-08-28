#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - This function prints the diagonal
  * @a: input parameter
  * @size: input parameter
  *
  * Return: Nothing
  */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diag1 += a[(i * size) + j];
			}
			if (i + j == size - 1)
			{
				diag2 += a[(i * size) + j];
			}
		}
	}
	printf("%d, %d\n", diag1, diag2);
}
