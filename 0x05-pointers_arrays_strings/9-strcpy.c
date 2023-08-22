#include "main.h"

/**
  * _strcpy - this function copies a string
  * @dest: input parameter(pointer)
  * @src: input parameter(pointer)
  * Return: char(pointer);
  */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		++len;
	}
	for (i = 0; i < len; i++)
	{
		*(dest + i) = src[i];
	}
	*(dest + len) = '\0';
	return (dest);
}
