#include "main.h"

/**
  * print_numbers - prints integers from 0-9
  *
  * Return: nothing
  */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
