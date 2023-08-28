#include "main.h"

/**
  * _memset - function fills the first n bytes of the memory area pointed
  * to by s with the constant byte b
  * @s:  address of the memory int n
  * @b:  constant byte
  * @n: n bytes to print
  *
  * Return: a pointer to the memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
