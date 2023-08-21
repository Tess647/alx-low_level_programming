#include "main.h"

/**
  * puts2 - prints out strings in reverse order
  * @str: input parameter(pointer)
  * Return: Nothing
  */

void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		++len;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
