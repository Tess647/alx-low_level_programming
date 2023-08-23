#include "main.h"

/**
  * _strncpy - function that copies a string
  * @dest: function input parameter
  * @src: function input parameter
  * @n: function input parameter
  *
  * Return: a pointer to the resulting string dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;

	}

	return (dest);
}
