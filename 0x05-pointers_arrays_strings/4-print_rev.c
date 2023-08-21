#include "main.h"

/**
  * print_rev - prints out strings in reverse order
  * @s: input parameter(pointer)
  * Return: Nothing
  */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		++i;
	}
	--i;
	for (; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
