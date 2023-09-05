#include "main.h"

/**
  * _strdup - contains a copy of the string
  * @str: pointer to the string memory
  *
  * Return: pointer to the array (Success), NULL (Error)
  */

char *_strdup(char *str)
{
	unsigned int i, count = 0;
	char *array;

	if (str == '\0')
		return (NULL);
	while (str != '\0')
	{
		count++;
	}

	array = malloc(sizeof(char) * (count + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		array[i] = str[i];
	}

	return (array);
}
