#include "main.h"

/**
  * _strcat - function that appends src string to dest string
  * @dest: function input parameter
  * @src: function input parameter
  *
  * Return: a pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
