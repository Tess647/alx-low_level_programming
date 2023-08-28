#include "main.h"
#include <stdio.h>

/**
  * _strchr - locates a character in memory
  * @s: string to search
  * @c: char to find
  *
  * Return: a pointer to the first ocuurence of the character
  * c int the string s, or NULL if the character is not found
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
