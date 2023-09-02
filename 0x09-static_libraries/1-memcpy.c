#include "main.h"

/**
  * _memcpy - function copies memory area
  * @dest: address of the memory that is copied
  * @src: memory area to be copied into dest memory area
  * @n: n bytes of the memory copied
  *
  * Return: a pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
