#include "main.h"

/**
  * string_toupper - function changes all
  * lowercase letters of a string to uppercase
  * @s: function input parameter
  *
  * Return: char pointer
  */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		return (s);
	}
}			
