#include <stdlib.h>
#include "main.h"

/**
  * _strdup - contains a copy of the string
  * @str: pointer to the string memory
  *
  * Return: pointer to the array (Success), NULL (Error)
  */

char *_strdup(char *str)
{
	unsigned int i, count;
	char *array;
	
	i = 0;
	count = 0;

	if (str == NULL)
		return (NULL);

	while (str[count])
	{
		count++;
	}

	array = malloc(sizeof(char) * (count + 1));

	if (array == NULL)
		return (NULL);

	while (array[i] = str[i] != '\0')
			i++;

	return (array);
}
