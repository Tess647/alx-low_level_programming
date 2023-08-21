#include "main.h"

/**
  * rev_string - reverses a string
  * @s: input parameter (pointer)
  * Return: Nothing
  */

void rev_string(char *s)
{
	int i = 0, j;
	int k;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;

	for (k = 0; k < j; j--)
	{
		char temp = s[i];
		s[k] = s[j];
		s[j--] = temp;
	}
}
