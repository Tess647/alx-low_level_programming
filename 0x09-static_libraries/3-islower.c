#include <stdio.h>
#include "main.h"

/**
  * _islower - checks for lowercase character
  * @c: integer function parameter
  *
  * Return: 1 if c is lowercase, 0 otherwise
  */
int _islower(int c)
{
	if (c >= 'a')
		return (1);
	else
		return (0);
}
