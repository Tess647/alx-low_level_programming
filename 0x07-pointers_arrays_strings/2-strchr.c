#include "main.h"
#include <stddef.h>

/**
  * _strchr - function copies memory area
  * @s: address of the memory char C
  * @c: char input parameter
  *
  * Return: a pointer to s
  */

char *_strchr(char *s, char c)
{
	unsigned int len = 0;
	unsigned int i;

	while (s[len] != '\0')
	{
		++len;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
