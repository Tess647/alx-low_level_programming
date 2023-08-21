#include "main.h"

/**
  * print_rev - prints out strings in reverse order
  * @s: input parameter(pointer)
  * Return: Nothing
  */

void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	for (; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
