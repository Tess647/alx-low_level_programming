#include <stdio.h>

/**
  * main - Entry point
  *
  * this program prints lowercase alphabets
  * Return: Always 0 (success)
  */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch++);
	}
	putchar('\n');
	return (0);
}
