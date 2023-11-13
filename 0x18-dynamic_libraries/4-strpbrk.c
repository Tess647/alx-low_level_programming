#include "main.h"
#include <stdio.h>

/**
  * _strpbrk - returns a pinter to teh byte in s
  * @s: input parameter
  * @accept: input parameter
  *
  * Return: a char pointer
  */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
