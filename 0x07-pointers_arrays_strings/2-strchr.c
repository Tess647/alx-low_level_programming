#include "main.h"

/**
  * _strchr - function copies memory area
  * @s: address of the memory char C
  * @c: char input parameter
  *
  * Return: a pointer to s
  */

char *_strchr(char *s, char c)
{
	int len = 0;
	unsigned int i;
	char *pos = NULL;

	while (s[i] != '\0')
	{
		++len;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			pos == s[i];
		}
	}
	return (pos);
}
