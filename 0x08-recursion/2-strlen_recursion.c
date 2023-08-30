#include "main.h"

/**
  * _strlen_recursion - function that prints a string in reverse
  * @s: pointer to string s to be printed
  *
  * Return: Nothing
  */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
