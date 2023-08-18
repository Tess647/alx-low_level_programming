#include "main.h"

/**
  * print_diagonal - prints a diagonal line
  * @n: input parameter
  * Return: nothing
  */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
				if (j < i)
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
