#include <stdio.h>
#include "main.h"

/**
  * print_sign - check main.h
  *
  * @n: input parameter
  * Description: prints the sign of a number
  * Return: 1 for positive, 0 for n = 0 and -1 for negative value
  */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		putchar('0');
	}
	else
	{
		value = -1;
		putchar('-');
	}
	return (value);
}
