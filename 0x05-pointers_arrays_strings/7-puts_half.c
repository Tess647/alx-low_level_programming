#include "main.h"

/**
  * puts_half - prints the second half of a string
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
	for (i = (len - 1)/2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
