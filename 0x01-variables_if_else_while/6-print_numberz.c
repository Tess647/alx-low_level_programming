#include <stdio.h>

/**
  * main - Entry point of the program
  *
  * This program prints out the characters 0-9
  * Return: Always 0(Success)
  */

int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch++);
	}
	putchar('\n');
	return (0);
}
