#include "main.h"
#include <stdio.h>

/**
  * print_last_digit - check main.h
  *
  * @t: integer input
  * Description: prints the last digit of a number
  * Return: the value of the last digit
  */
int print_last_digit(int t)
{
	int value;

	if (t < 0)
		value = -1 * (t % 10);
	else
		value = t % 10;

	_putchar((value % 10) + '0');
	return (value % 10);
}
