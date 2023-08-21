#include "main.h"

/**
  * _strlen - returns the length of a string;
  * @s: input parameter(pointer)
  * Return: Integer
  */

int _strlen(char *s)
{
	int count = 0;

	while (*char != '\0')
	{
		++count;
		++char;
	}
	return (count);
}
