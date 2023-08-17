#include "main.h"

/**
  * print_line - prints a line
  * @n: input parameter
  * Return: nothing
  */

void print_line(int n)
{
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
