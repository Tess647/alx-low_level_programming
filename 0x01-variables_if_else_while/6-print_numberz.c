#include <stdio.h>

/**
  * main - Entry point of the program
  *
  * This program prints out the characters 0-9
  * Return: Always 0(Success)
  */

int main(void)
{
	int i = 0;

	while (i <= '9')
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
