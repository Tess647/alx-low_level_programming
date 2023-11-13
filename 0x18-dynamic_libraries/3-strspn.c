#include "main.h"
#include <stdio.h>

/**
  * _strspn - returns number of bytes
  * @s: input parameter
  * @accept: input parameter
  *
  * Return: an integer
  */

unsigned int  _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int i, j, flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				++count;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (count);
		}
	}
	return (0);
}
