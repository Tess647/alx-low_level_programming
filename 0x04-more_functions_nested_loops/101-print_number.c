#include "main.h"

/**
  * print_number - print a number
  * @n: input parameter
  * Return: Nothing
  */

void print_number(int n)
{
	int n1 = n;

	if (n < 0)
		n1 *= -1;
	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}
