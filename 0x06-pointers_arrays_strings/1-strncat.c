#include "main.h"

/**
  * _strncat - function that concatenates two strings
  * @dest: function input parameter
  * @src: function input parameter
  * @n: function input parameter
  *
  * Return: a pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] = '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
