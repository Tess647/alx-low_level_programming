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
		if (haystack[i] == needle[j])
		{
			++j;
		}
		else
		{
			j = 0;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i - j + 1);
		}
	}
	return (NULL);
}
