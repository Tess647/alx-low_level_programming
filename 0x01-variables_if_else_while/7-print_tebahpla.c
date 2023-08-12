#include <stdio.h>

/**
  * main - Entry point of the program
  *
  * This program prints the alphabets in reverse order
  * Return: Always 0(Successful)
  */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch--);
	}
	putchar('\n');
	return (0);
}
