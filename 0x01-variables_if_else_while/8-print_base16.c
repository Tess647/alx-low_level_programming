#include <stdio.h>

/**
  * main - Entry point of the program
  *
  * This program prints all the numbers of base 16 in lower case
  * Return: Always 0(Success)
  */

int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch++);
	}
	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch++);
	}
	putchar('\n');
	return (0);
}
