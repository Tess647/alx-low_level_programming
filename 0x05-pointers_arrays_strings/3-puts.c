#include "main.h"

/**
  * _puts - prints out strings
  * @str: input parameter(pointer)
  * Return: Nothing
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
