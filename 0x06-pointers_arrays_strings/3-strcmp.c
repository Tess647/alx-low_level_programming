#include "main.h"

/**
  * _strcmp - function that compares two strings
  * @s1: function input parameter
  * @s2: function input parameter
  *
  * Return: a pointer to the resulting string dest
  */

char *_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		*s1++;
		*s2++;
	}

	return (*s1 - *s2);
}
