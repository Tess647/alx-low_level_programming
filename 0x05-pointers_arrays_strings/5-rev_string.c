#include "main.h"

/**
  * rev_string - prints out strings in reverse order
  * @s: input parameter(pointer)
  * Return: Nothing
  */

void swapC(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void rev_string(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		++len;
	}
	for (i = 0; i < (len /2); i++)
	{
		swapC(&s[i], &s[len - i - 1]);
	}
}
