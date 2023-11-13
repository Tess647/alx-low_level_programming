#include "main.h"
#include <stdio.h>

/**
  * _strstr - funtion cifnd the first ocuurence of the substring;
  * @haystack: input parameter
  * @needle: input parameter
  *
  * Return: a char pointer
  */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
