#include "main.h"
#include <stdio.h>

/**
  * _strchr - locates a character in memory
  * @s: input parameter
  * @c: input parameter
  *
  * Return: a  char pointer
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
