#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * _islower - checks for lowercase character
  * @c: integer function parameter
  *
  * Return: 1 if c is lowercase, 0 otherwise
  */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
