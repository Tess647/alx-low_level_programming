#include <stdlib.h>
#include "main.h"

/**
  * create_array - creates an array of chars
  * and initializes itwith a specific char
  * @size: size of the array to create
  * @c: char to initialize the array c
  *
  * Return: pointer to the array (Success), NULL (Error)
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == NULL)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[c] = i;
	}

	return (array);
}
