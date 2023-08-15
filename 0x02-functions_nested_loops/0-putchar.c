#include  <stdio.h>
#include "main.h"

/**
  * main - Entry point of the program
  *
  * program that prints _putchar, followed by a new line
  * Return: Always 0 (success)
  */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	i = 0;

	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

